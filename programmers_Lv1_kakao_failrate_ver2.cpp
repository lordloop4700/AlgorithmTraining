#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool check(pair<int, double> &a, pair<int, double> &b){
    if(a.second == b.second){
        return a.first > b.first;
    }

    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, double>> stages_failrate;
    int user = stages.size();
    
    for(int i = 0; i < N; i++){
        stages_failrate[stages[i]].first += 1;
    }
    
    for(int i = 1; i <= N + 1; i++){
        int count = 0;
        for(int j = 0; j < stages.size(); j++){
            if(stages[j] == i){
                count++;
            }
        }
        
        stages_failrate[i - 1].second = count / (double)user;
        user -= count;
    }

    sort(stages_failrate.begin(), stages_failrate.end());
    
    for(int i = 0; i < stages_failrate.size(); i++){
        answer.push_back(stages_failrate[i].first);
    }

    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, double>> stages_failrate;
    int user = stages.size();
    
    for(int i = 0; i < N; i++){
        stages_failrate[i].first(i + 1);
    }
    
    for(int i = 1; i <= N + 1; i++){
        int count = 0;
        for(int j = 0; j < stages.size(); j++){
            if(stages[j] == i){
                count++;
            }
        }
        
        stages_failrate[i - 1].second(count / (double)user);
        user -= count;
    }
    
    
    return answer;
}
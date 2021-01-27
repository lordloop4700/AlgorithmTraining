#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    int user = stages.size();
    vector<double> stages_failrate;
    
    sort(stages.begin(), stages.end(), less<int>());
    
    for(int i = 1; i < N; i++){
        int count = 0;
        for(int j = 0; j < user; j++){
            if(stages[j] == i) count++;
            else break;
        }
        
        stages_failrate.push_back((double)count);
    }
    
    for(int i = 0; i < N; i++){
        double save = stages_failrate[i];
        
        stages_failrate[i] /= user;
        user -= save;
    }
    
    for(int i = 0; i < N; i++){
        double check = *min_element(stages_failrate.begin(), stages_failrate.end());
        
        for(int j = 0; j < N; j++){
            if(stages_failrate[j] == check){
                answer.push_back(j + 1);
                stages_failrate[j] = N + 1;
                break;
            }
        }
    }
/*
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
*/
    //문제점: for문의 범위가 잘못됨. (stages의 각각의 값은 도달은 했지만 클리어하지 못한 경우)

    return answer;
}
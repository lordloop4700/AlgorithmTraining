#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    int user = stages.size();
    vector<int> stages_failrate;
    
    sort(stages.begin(), stages.end(), less<int>());
    
    for(int i = 1; i < N; i++){
        int count = 0;
        for(int j = 0; j < user; j++){
            if(stages[j] == i) count++;
            else break;
        }
        
        stages_failrate.push_back(count);
    }
    
    for(int i = 0; i < N; i++){
        //실패율 계산 루틴
    }

    
    
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<string> check_alpha;
    
    for(auto value : strings){
        check_alpha.push_back(value[n]);
    }
    
    check_alpha.erase(unique(check_alpha.begin(), check_alpha.end()), check_alpha.end());
    
    for(int i = 0; i < check_alpha.size(); i++){
        int count = 0;
        for(int j = 0; j < strings.size(); j++){
            if(value)
        }
    }
    
    return answer;
}
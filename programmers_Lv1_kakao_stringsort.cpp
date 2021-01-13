#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<string> check_str;
    
    for(int i = 0; i < strings.size(); i++){
        check_str.push_back(strings[i][n] + strings[i]);
    }
    
    sort(check_str.begin(), check_str.end());
    
    for(int i = 0; i < check_str.size(); i++){
        answer.push_back( check_str[i].substr(1));
    }
    
    return answer;
}
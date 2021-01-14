#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<string> arr1_wall;
    vector<string> arr2_wall;
    
    for(int i = 0; i < n; i++){
        arr1_wall[i] = bitset<5>(arr1[i]).to_string();
    }
    
    for(int i = 0; i < n; i++){
        arr2_wall[i] = bitset<5>(arr2[i]).to_string();
    }
    
    for(int i = 0; i < n; i++){
        string str = "";
        
        for(int j = 0; j < n; j++){
            if(arr1_wall[i][j] || arr2_wall[i][j]){
                str += "#";
            }else{
                str += " ";
            }
        }
        answer.push_back(str);
    }
    
    return answer;
}
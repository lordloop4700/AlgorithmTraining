#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<string> arr1_wall;
    vector<string> arr2_wall;
    
    for(int i = 0; i < n; i++){       
        
        if(arr1[i] < 16){
            string make = "0";
            
            for(int j = arr1[i]; j > 0 ; j++){
                make += to_string(j % 2);
                j /= 2;
            }
            arr1_wall[i] = make;
            
        }else{
            string make = "";
            
            for(int j = arr1[i]; j > 0 ; j++){
                make += to_string(j % 2);
                j /= 2;
            }
            arr1_wall[i] = make;
        }
    }
    
    return answer;
}
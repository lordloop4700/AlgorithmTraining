#include <string>
#include <vector>


using namespace std;

int solution(vector<vector<int> > board, vector<int> moves) {
	int answer = 0;
	int row_count = board.size();
	vector<int> result_arr;

	for (auto move : moves) {
		for (int i = 0; i < row_count; i++) {
			if (board[i][move - 1] != 0) {
				result_arr.push_back(board[i][move - 1]);
				board[i][move - 1] = 0;
				
				if (!result_arr.empty() && *(&result_arr.back() - 1) == result_arr.back()) {
					result_arr.pop_back();
					result_arr.pop_back();
					answer += 2;
				}			

				break;
			}
			else {
				continue;
			}
		}
	}

	return answer;
}
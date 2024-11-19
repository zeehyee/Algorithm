#include <string>
#include <vector>


using namespace std;
int dx[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1 };
int dy[] = {-1, 0, 1, -1, 0, 1, -1 ,0 ,1 };

int solution(vector<vector<int>> board) {
    int answer = 0;
    int n = board.size();
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j<board[i].size(); j++){
            
            if(board[i][j] == 1){
                board[i][j] = -1;
                answer++;
            
                for(int k = 0; k< 9; k++){
                    int nx = i + dx[k];
                    int ny = j + dy[k];

                    if(( -1 < nx && nx < n) && (-1 < ny && ny < n) && (board[nx][ny] == 0)){
                        board[nx][ny] = -1;
                        answer++;
                    }
                }       
            }
        }
    }
    
    return n * n - answer;
}
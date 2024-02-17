#include <iostream>
#include <algorithm>
using namespace std;

int maxcount=0;

void columnCount(char arr[50][50], int size){
    for(int i=0 ; i<size ; i++){
        int count = 1;
        for(int j=0 ; j<size ; j++){
            if(arr[i][j] == arr[i][j+1]){
                count++;
            }
            else{
                if(count > maxcount){
                    maxcount = count;
                }
                count = 1;
            }
        }
    }
}

void rowCount(char arr[50][50], int size){
    for(int i=0 ; i<size ; i++){
        int count = 1;
        for(int j=0 ; j<size ; j++){
            if(arr[j][i] == arr[j+1][i]){
                count++;
            }
            else{
                if(count > maxcount){
                    maxcount = count;
                }
                count = 1;
            }
        }
    }
}

int main() {
    int n;
    char board[50][50];
    cin >> n;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin >> board[i][j];
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-1 ; j++){
            swap(board[i][j], board [i][j+1]);
            columnCount(board, n);
            rowCount(board, n);
            swap(board[i][j+1], board[i][j]);

            swap(board[j][i], board[j+1][i]);
            columnCount(board, n);
            rowCount(board, n);
            swap(board[j+1][i], board[j][i]);
        }
    }
    cout << maxcount;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    int T, R;
    string S;

    cin >> T;

    for(int i=0 ; i<T ; i++){
        cin >> R >> S;

        string result;

        for(int i=0 ; i< S.length() ; i++){
            for(int j=0 ; j<R ; j++){
              result += S[i];
            }
        }     
        cout << result << endl;
    }    
}
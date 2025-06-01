#include <iostream>

using namespace std;

int main()
{
    int abc[26];
    int result[26];
    string str;
    
    cin >> str;

    for (int i=0 ; i<26 ; i++){
        abc[i] = 'a' + i;
        result[i] = -1;
    }
    
    for(int i=0 ; i<26 ; i++){
         for(int j=0 ; j< str.length() ; j++){
            if(abc[i] == str[j]  && result[i] == -1){
                result[i] = j;
                break;
            }   
        }
    }
      
    for (int i = 0; i < 26; i++) {
        cout << result[i];
        if (i < 25) cout << " ";
    }

    return 0;
}
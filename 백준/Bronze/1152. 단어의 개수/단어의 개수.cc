#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    int count=0;
    bool inWord = false;

    for(int i=0 ; i<str.length() ; i++){
        if(str[i] != ' '){
            if(!inWord){
                count++;
                inWord = true;
            }
        }
        else
            inWord = false;
    }

    cout << count;
}
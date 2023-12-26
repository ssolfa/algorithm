#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    string s;
    cin >> s;
    for(int i=0 ; i<s.length() ; i++){
        sum += (((int)s[i]-65)/3)+3;

        if(s[i] == 'S' || s[i] == 'V' || s[i] == 'Y' || s[i] == 'Z'){
            sum--;
        }
    }
    cout << sum;
}
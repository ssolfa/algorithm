#include <iostream>
using namespace std;
int main(){
    bool check = false;
    int sum=0; 
    string s, num = "";
    cin >> s;
    for(int i=0; i <= s.length() ; i++){
        if(i == s.length() || s[i] == '+' || s[i] == '-'){
            if(check == false){
                sum += stoi(num);
                num = "";
            }
            else if(check == true){
                sum -= stoi(num);
                num = "";
            }
        }
        else{
            num += s[i];
        }
    
        if(s[i] == '-'){
            check = true;
        }
    }
    cout << sum;
}
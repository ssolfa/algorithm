#include <iostream>

using namespace std;

int main()
{
    string croatian[8] = { "dz=", "c=", "c-", "d-", "lj", "nj", "s=", "z="};
    string str;
    cin >> str;
    
    for(int i=0 ; i<8; i++){
        while(str.find(croatian[i]) != string::npos) {
            if(croatian[i] == "dz=") {
                str.replace(str.find(croatian[i]), 3, "#");
            } else {
                str.replace(str.find(croatian[i]), 2, "#");
            }
        }
    }
    
    cout << str.length();
}
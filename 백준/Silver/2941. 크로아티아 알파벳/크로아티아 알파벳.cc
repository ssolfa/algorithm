#include <iostream>

using namespace std;

int main()
{
    string croatian[8] = { "dz=", "c=", "c-", "d-", "lj", "nj", "s=", "z=" };
    string str;
    cin >> str;
    
    for (int i = 0; i < 8; i++) {
        while (str.find(croatian[i]) != string::npos) {
            str.replace(str.find(croatian[i]), croatian[i].length(), "#");
        }
    }
    
    cout << str.length();
    return 0;
}

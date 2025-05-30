#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string str;
    int sum=0;

    cin >> n;
    str.resize(n);

    for(int i=0 ; i<n; i++){
        cin >> str[i];
        sum += str[i] - '0'; 
    }

    cout << sum;
}
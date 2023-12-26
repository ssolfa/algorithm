#include <iostream>
using namespace std;

int main(){
    int n, num = 2;;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        num += num-1;
    }
    cout << num*num;
}
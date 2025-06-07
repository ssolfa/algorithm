#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    
    while(n >= 0) {
        if(n % 5 == 0) {
            count += n / 5;
            cout << count << endl;
            return 0;
        }
        else {
            n -= 3;
            count++;
        }
    }
    
    cout << -1 << endl;
    return 0;
}
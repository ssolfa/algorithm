#include <iostream>
using namespace std;

int main() {
    long N, sum = 0, result = 0;
    cin >> N;
    
    for (int i = 1; sum <= N; i++) {
        sum += i;
        result = i;
    }

    cout << result - 1;
    return 0;
}
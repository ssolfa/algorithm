#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> v(n);

    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    long long m = 0;

    if(n%2){ // 홀수
        m = v[n-1];
        for(int i=0 ; i<(n-1)/2 ; i++){
            m = max(m, v[i] + v[n - i - 2]);
        }
    }
    else{ // 짝수
        for(int i=0 ; i<n/2 ; i++){
            m = max(m, v[i] + v[n - i - 1]);
        }
    }
    cout << m;
}
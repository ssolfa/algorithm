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
    if(n%2 != 0){
        m = v.back();
        for(int i=0 ; i<n/2 ; i++){
            m = max(m, v[i] + v[n - i - 2]);
        }
    }
    else{
        for(int i=0 ; i<n/2 ; i++){
            m = max(m, v[i] + v[n - i - 1]);
        }
    }
    cout << m;
}
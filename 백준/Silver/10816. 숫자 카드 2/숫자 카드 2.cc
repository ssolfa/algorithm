#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    int arr1[n];
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    cin >> m;
    int arr2[m];
    for(int i=0; i<m; i++){
        cin >> arr2[i];
    }

    sort(arr1, arr1+n);

    for (int i = 0; i < m; i++) {
        int cnt = upper_bound(arr1, arr1+n, arr2[i]) - lower_bound(arr1, arr1+n, arr2[i]);
        cout << cnt << " ";
    }
}
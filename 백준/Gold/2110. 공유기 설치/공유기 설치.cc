#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, c, ans=0;
    cin >> n >> c;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int start = 1;
    int end = arr[n-1] - arr[0];

    while(start <= end){
        int mid = (start + end) / 2;
        int count = 1;
        int last = arr[0];

        for(int i = 0; i < n; i++){
            if(arr[i] - last >= mid){
                last = arr[i];
                count++;
            }
        }

        if(count >= c){
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    cout << ans;
}
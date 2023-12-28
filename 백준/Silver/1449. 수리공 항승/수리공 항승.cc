#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, l, check, cnt = 1, arr[1000];
    cin >> n >> l;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    
    check = l-1;
    for(int i=1 ; i<n ; i++){
        if(arr[i]-arr[i-1] <= check){
            check = check - (arr[i]-arr[i-1]);
        }
        else{
            cnt++;
            check = l-1;
        }
    }
    cout << cnt;
}
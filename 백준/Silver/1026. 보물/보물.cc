#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, arrA[100], arrB[100], sum=0;
    cin >> n;
    
    for(int i=0 ; i<n ; i++){
        cin >> arrA[i];
    }
    
     for(int i=0 ; i<n ; i++){
         cin >> arrB[i];
    }
    
    sort(arrA, arrA+n);
    sort(arrB, arrB+n, greater<int>()); 
    
    for(int i = 0; i < n; i++){
        sum += arrA[i] * arrB[i];
    }
    
    cout << sum;
}
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, count=0;
    cin >> n;
    
    priority_queue <int, vector<int>, greater<int>> q;

    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        q.push(x);
    }
    
    while(q.size() > 1){
        int first = q.top();
        q.pop();
        int second = q.top();
        q.pop();
        
        count += first + second;
        
        q.push(first + second);
    }

    cout << count;
}
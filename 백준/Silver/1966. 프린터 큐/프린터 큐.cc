#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    
    for(int i=0 ; i<t ; i++){
        int n, m;
        cin >> n >> m;
        
        queue <pair<int,int>> q;

        for(int j=0 ; j<n ; j++){
            int priority;
            cin >> priority;
            q.push({priority, j});
        }
        
        int order = 0;
        
        while(!q.empty()){
            int prior = q.front().first;
            int index = q.front().second;
            
            bool hasHigher = false;
            queue<pair<int,int>> temp = q;
            
            while(!temp.empty()){
                if(temp.front().first > prior){
                    hasHigher = true;
                }
                temp.pop();
            }
            
            if(hasHigher){
                q.pop();
                q.push({prior, index});
            }
            
            else{
                order++;
                q.pop();
                
                if(index == m){
                    cout << order << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
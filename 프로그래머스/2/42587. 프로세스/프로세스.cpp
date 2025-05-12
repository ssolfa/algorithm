#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    
    queue<pair<int, int>> q;
    
    priority_queue<int> pq;
    
    for(int i=0;i<priorities.size();i++){
        q.push(make_pair(i,priorities[i]));
        pq.push(priorities[i]);
    }
    
    int counter = 0;
    
    while(!q.empty()){
        pair<int,int> current = q.front();
        q.pop();
            
        if(current.second == pq.top()){
            pq.pop();
            counter++;
            
            if(location == current.first){
            return counter;
            }
        }
        
        else{
            q.push(current);
        }
    }    
    return -1;
}
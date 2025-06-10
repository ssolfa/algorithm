#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   int n, count=1;
   vector <pair<int,int>> v;
   cin >> n;
   
   for(int i=0 ; i<n ; i++){
       int start, end;
       cin >> start >> end;
       v.push_back({start, end});
   }
   
  sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b){
        if(a.second == b.second) {
            return a.first < b.first;
        }
        return a.second < b.second;
    });
   
   int lastEnd = v[0].second; 
   
   for(int i=1 ; i<n ; i++){
       if(v[i].first >= lastEnd){
           count++;
           lastEnd = v[i].second;
       }
   }
   
   cout << count;
}
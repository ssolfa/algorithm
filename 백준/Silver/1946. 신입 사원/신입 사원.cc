#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    
    for(int i=0 ; i< t ; i++){
        cin >> n;
        vector <pair<int, int>> v;
        
        for(int j=0 ; j<n ; j++){
            int a,b;
            cin >> a >> b;
            v.push_back(make_pair(a,b));
        }
        
        sort(v.begin(), v.end());
        
        int count = 1;
        int min = v[0].second;
        
        for(int j=1 ; j<n ; j++){
            if(min > v[j].second){
                min = v[j].second;
                count++;
            }
        }
        
        cout << count << endl;
    }
}
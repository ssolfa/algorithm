#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N, num1, num2;
    cin >> N;
    vector<pair<int, int>> v;

    for(int i = 0 ; i<N ; i++){
        cin >> num1 >> num2;
        v.push_back(pair<int, int> (num1, num2));
    }

    for(int i = 0 ; i<N ; i++){
        int cnt = 1; // 매번 초기화
        for(int j = 0 ; j<N ; j++){
            if(i != j && v[i].first < v[j].first && v[i].second < v[j].second)
                cnt++;
        }
        cout << cnt << ' ';
    }
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<string>> clothes) {
    
    vector<string> category;
    
    for(int i=0; i<clothes.size();i++){
        category.push_back(clothes[i][1]);
    }
    
    sort(category.begin(), category.end());
    
    vector<int> counts;
    
    int count = 1;
    
    for (int i = 1; i < category.size(); i++) {
        if (category[i] == category[i-1]) {
            count++;
        } else {
            counts.push_back(count);
            count = 1;
        }
    }
    counts.push_back(count); 
    
    
    int answer = 1;
    
    for (int i = 0; i < counts.size(); i++) {
        answer *= (counts[i] + 1);
    }
    
    answer -= 1;
    
    return answer;
    
}
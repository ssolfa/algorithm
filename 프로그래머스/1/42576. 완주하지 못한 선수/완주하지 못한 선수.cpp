#include <string>
#include <vector>
#include <unordered_map>

using namespace std;


string solution(vector<string> participant, vector<string> completion) {
    
    unordered_map<string, int> map;
    
    for(string name : participant) {
        map[name]++;
    }
    
    for (string name : completion) {
        map[name]--;
    }


     for (auto pair : map) {
        if (pair.second > 0) {
            return pair.first;
        }
    }
    
    return"";
}
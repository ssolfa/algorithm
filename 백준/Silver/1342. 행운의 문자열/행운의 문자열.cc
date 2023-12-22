#include <iostream>
#include <algorithm>
using namespace std;

bool check(string &s){
    for (int i = 0; i < s.length() - 1; i++){
        if (s[i] == s[i + 1]){
            return false;
        }
    }
    return true;
}

int find(string& s){
    string temp = s;
    sort(temp.begin(), temp.end());

    int count = 0;

    do{
        if (check(temp)){
            count++;
        }
    } while (next_permutation(temp.begin(), temp.end()));
    return count;
}

int main(){
    string s;
    cin >> s;
    int result = find(s);
    cout << result;
}
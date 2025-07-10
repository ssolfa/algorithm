#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int l, c;
vector<char> v;
vector<char> password;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isValid() {
    int vowels = 0, consonants = 0;
    
    for (int i = 0; i < l; i++) {
        if (isVowel(password[i])) vowels++;
        else consonants++;
    }
    
    return vowels >= 1 && consonants >= 2;
}

void dfs(int start, int depth) {
    if (depth == l) {
        if (isValid()) {
            for (int i = 0; i < l; i++) {
                cout << password[i];
            }
            cout << '\n';
        }
        return;
    }
    
    for (int i = start; i < c; i++) {
        password[depth] = v[i];
        dfs(i + 1, depth + 1);
    }
}

int main() {
    cin >> l >> c;
    v.resize(c);
    password.resize(l);
    
    for (int i = 0; i < c; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    dfs(0, 0);
 }
#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    int count[26] = {0};
    string str;
    cin >> str;
    
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    
    for(int i=0 ; i<(int)str.length() ; i++){
        count[str[i]-'A']++;
    }
    
    int maxCount = *max_element(count, count + 26);
    
    int cnt = 0;
    int maxIndex = -1;
    
    for(int i=0 ; i<26 ; i++){
        if(count[i] == maxCount){
            cnt++;
            maxIndex = i;
        }
    }
    
    if(cnt > 1) {
        cout << '?' << endl;
    } else {
        cout << (char)('A' + maxIndex) << endl;
    }
    
    return 0;
}
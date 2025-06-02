#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    string str;
    cin >> n;

    for(int i=0 ; i < n ; i++){
        bool check[26] = {false};
        bool isGroup = true;
        cin >> str;
        for(int j=0 ; j< str.length() ; j++){
            if(j>0 && check[str[j] - 'a'] && (str[j] != str[j-1])){
                isGroup = false;
            }
            check[str[j] - 'a'] = true;
        }
        
        if(isGroup)
        {
            count++;
        }
    }
    
    cout << count;
}
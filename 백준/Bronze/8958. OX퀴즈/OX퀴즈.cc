#include <iostream>

using namespace std;

int main()
{
    int n;
    string str;
    
    cin >> n;
    
    for (int i=0 ; i<n ; i++){
        int sum=0 ,count=0;
        cin >> str;
        for(int j=0 ; j<str.length() ; j++){
            if(str[j] == 'O'){
                count++;
                sum += count;
                }
                
            else{
                count = 0;
            }
        }
        cout << sum << endl;
    }
}
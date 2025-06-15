#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    int countZero=0, countOne=0;
  
    cin >> str;

    for(int i=0 ; i< str.size() ; i++){
        if(i==0 || str[i] != str[i-1]){
        if(str[i] == '0'){
            countZero++;
        }
        else{
            countOne++;
        }
        }
    }
    
    cout << min(countZero,countOne);
}
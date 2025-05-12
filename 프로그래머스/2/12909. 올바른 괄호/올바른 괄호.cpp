#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char> stack;
    
    for(int i=0 ; i<s.length(); i++){
        if(s[i] == '(')
            stack.push('(');
        else{
            if(stack.empty()){
                return false;
            }    
            stack.pop();
        }
    }
    
    return stack.empty();
}
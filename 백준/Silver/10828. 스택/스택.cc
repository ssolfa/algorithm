#include <iostream>
#include <stack>

using namespace std;

stack <int> s;

int main(){
    int N;
    string str;
    cin >> N;

    for(int i=0 ; i<N ; i++){
        cin >> str;

    if (str == "push"){
        int x;
        cin >> x;
        s.push(x);
    }

    else if (str == "pop"){
        if(s.empty())
            cout << "-1" << endl;
        else{
        cout << s.top() << endl;
        s.pop();
        }
    }

    else if (str == "size"){
        cout << s.size() << endl;
    }

    else if (str == "empty"){
        if(s.empty())
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }

    else if (str == "top"){
        if (s.empty())
            cout << "-1"<< endl;
        else
        cout << s.top() << endl;
    }

    }
}
#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

int main()
{
    int N, num, cnt = 1;
    cin >> N;
    string result;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        while (cnt <= num)
        {
            s.push(cnt++);
            result += "+\n";
        }

        if (s.top() == num)
        {
            s.pop();
            result += "-\n";
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
    
    cout << result;
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;

    string croatian[8] = { "dz=", "c=", "c-", "d-", "lj", "nj", "s=", "z=" };

    int count = 0;
    for (int i = 0; i < str.length(); ) {
        bool matched = false;
        for (int j = 0; j < 8; j++) {
            int len = croatian[j].length();
            if (str.substr(i, len) == croatian[j]) {
                i += len;
                count++;
                matched = true;
                break;
            }
        }
        if (!matched) {
            i++;
            count++;
        }
    }

    cout << count;
    return 0;
}

#include <iostream>
#include <algorithm>
#include <string>

bool is_lucky(const std::string& s) {
    for (int i = 0; i < s.length() - 1; ++i) {
        if (s[i] == s[i + 1]) {
            return false;
        }
    }
    return true;
}

int count_lucky_strings(const std::string& s) {
    std::string temp = s;
    std::sort(temp.begin(), temp.end()); 

    int count = 0;
    do {
        if (is_lucky(temp)) {
            ++count;
        }
    } while (std::next_permutation(temp.begin(), temp.end()));

    return count;
}

int main() {
    std::string input_str;
    std::cin >> input_str;

    int result = count_lucky_strings(input_str);
    std::cout << result << std::endl;

    return 0;
}

#include<iostream>
using namespace std;


int main() {
    long long l = 5;
    long long r = 17;
    int count = 0;

    for (int i = l; i <= r; ++i) {
        std::string str = std::to_string(i);
        int strLength = str.length();
        if (strLength == 1) {
            count = count + 1;
        } else {
            if (str[0] == str[strLength - 1]) {
                count = count + 1;
            }
        }
    }

    std::cout << "Count of numbers: " << count << std::endl;
    return 0;
}
// cout << count;
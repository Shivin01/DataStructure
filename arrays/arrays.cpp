#include<iostream>
#include <vector>
using namespace std;

long long int n = 84959832782288931;

long long int reverseNumber(long long int n=84959832782288931)
{
	//type your code here
	// long long int start = 0;
	// long long int revNum = 0;
	// while (n>0) {
    //     cout << "n" << n << endl;
	// 	long long int num = n % 10;
    //     cout << "num" << num << endl;
    //     cout << "revNum" << revNum << endl;
    //     if ((revNum == 0 && num != 0) || start != 0 ) {
    //         revNum = start*10 + num;
    //         cout << "After revNum" << revNum << endl;;
    //         start = revNum;           
	// }
    // n = n/10;
    // }
	// return start;

    string s = "racecar";
    int mid = s.size() / 2 + 1;
	bool pal = true;
	for (int i = 0; i<mid; i++) {
		if (s[i] != s[mid + i]) {
			pal = false;
			break;
		}
	}
	return pal;
}

bool palind ()  {
    string s = "aaBBa";
    int mid = s.size() / 2 + 1;
    // cout << mid;
	bool pal = true;
	for (int i = 0; i<mid; i++) {
        cout << s[i];
        cout << s[s.size() - 1 - i];
		if (s[i] != s[s.size() - 1 - i]) {
			pal = false;
			break;
		}
	}
	return pal;
}


// bool checkPalindrome(string s="aaBBa@")
// {
//     // Write your code here.
//     string cleanstring;
//     for (char c: s) {
//         if (isalnum(c)) {
//             cleanstring += tolower(c);
//         }
//     }
//     cout << cleanstring << endl;
//     int l = cleanstring.length();
//     cout << l << endl;
//     for (int i=0; i<=(l/2-1); i++ ) {
//         cout << 'c' << cleanstring[i] << endl;
//         cout << 'c1' << cleanstring[l-1-i] << endl;
//         if (cleanstring[i] != cleanstring[l-1-i]) {
//             return false;
//         }
//     }
//     return true;

// }

int main() {
    // long long int k = reverseNumber();
    // bool p = palind();
    // std::cout << k << endl;;
    // std::cout << p << endl;;
    // bool c = checkPalindrome();
    // std::cout << c << endl;
    vector<int> numbers;    
    for (int i = 2; i < 35; i++) {        
        int count = 0;
        cout << i << endl;
        if (35 % i == 0) {
            count = count + 1;
            if ((n/i )!= i) {
                count = count + 1;
            }
        }

        if (count == 2) {
            numbers.push_back(i);
        }
        
    }    
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    // return numbers;

}


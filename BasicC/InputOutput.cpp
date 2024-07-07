#include<iostream>
#include<string>

using namespace std;

int main() {

    // INPUT and OUT
    cout << "Hey, SHIVIN!" << "\n";

    // int x, y;
    // cin >> x >> y;
    // cout << "Value of x: " << x << " and Value of Y: " << y;

    // DATA types

    // int, long, long long, double, float
    // string, getline
    // char

    int q = 10;
    cout << "Int value which is of memory 10^9: " << q << endl;
    long w = 100;
    cout << "long value which is of memory 10^12: " << w << endl;
    long long e = 1000;
    cout << "long long value which is of memory 10^18: " << e << endl;
    double r = 10.1;
    cout << "Value of double: " << r << endl;
    float p = 90.8;
    cout << "Value of float: " << p << endl;

    string t = "hey";
    string y;
    cout << "String is marked with double quotes: " << t << endl;
    // getline(cin, y);    
    // cout << "Value of getline: " << y << endl;

    char ch = 'h';
    cout << "char is marked with single quotes: " << ch << endl;


    // if else

    int age = 29;
    cout << "Please enter your age: " << endl;
    // cin >> age;

    if (age>=18) {
        cout << "you are an adult" << endl;
    } else {
        cout << "you are not an adult" << endl;
    }

    int marks = 88;
    cout << "Please enter the marks: " << endl;
    // cin >> marks;

    if (marks < 25 ) {
        cout << "You are failed!" << endl;
    } else if (marks <= 44) {
        cout << "Your Garde is E" << endl;
    }
    else if (marks <= 49) {
        cout << "Your Garde is D" << endl;
    }
    else if (marks <= 59) {
        cout << "Your Garde is C" << endl;
    }
    else if (marks <= 79) {
        cout << "Your Garde is B" << endl;
    }
    else if (marks <= 100) {
        cout << "Your Garde is A" << endl;
    } else {
        cout << "Invalid Marks" << endl;
    }

    // SWITCH

    int day = 1;
    cout << "Enter day ( 1 - 7)" << endl;
    // cin >> day;    

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Incorrect day Entered" << endl;
        break;
    }
    cout << "swicth case complete" << endl;


    // Arrays

    int arr[5];
    arr[3] = 15;
    cout << arr[3] << endl;

    // 2d Array

    int arr2[5][5];
    arr2[1][3] = 79;
    cout << arr2[1][3] << endl;


    // Strings

    string s = "Shivin";
    int len = s.size() - 1;
    cout << s[0] << s[1] << endl;
    cout << s[len] << endl;
    s[0] = 'Z';
    cout << s;
    
    // For loops

    for ( int i = 0; i<=10; i++) {
        cout << "Shivin" << endl;
    }

    // While loop
    int j = 25;
    int k = 0;
    while (j>0) {
        cout << "Shivin is learning C++ " << j << endl;
        j--;
        k++;
    }
    cout << k << endl;


    return 0;

}


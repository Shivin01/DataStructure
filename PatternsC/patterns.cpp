#include<iostream>
using namespace std;

void print1() {
    for (int i = 0; i<4; i++) {
        for (int j = 0; j<4;j++) {
            cout << '*';            
        }
        cout << endl;
    }
}

void print2() {
    for (int i = 0; i<4; i++) {
        for (int j = 0; j<4;j++) {
            if (i >= j) {
            cout << '*'; 
            }           
        }
        cout << endl;
    }
}

void print3() {
    for (int i = 0; i<4; i++) {
        for (int j = 0; j<4;j++) {
            if (i <= j) {
            cout << '*'; 
            }           
        }
        cout << endl;
    }
}

// https://www.naukri.com/code360/problems/n-triangles_6573689?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void print4(int n) {
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= j ) {
                cout << j;
            }
        }
        cout << endl;
    }
}

// https://www.naukri.com/code360/problems/reverse-number-triangle_6581889?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void print5(int n) {
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
                cout << j;                
            }            
        cout << endl;
    }    
}

// https://www.naukri.com/code360/problems/star-triangle_6573671?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void print6(int n) {
    for (int i =0; i<n; i++ ) {

        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        for (int j=0; j< 2*i + 1; j++) {
            cout << "*";
        }
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

// https://www.naukri.com/code360/problems/reverse-star-triangle_6573685?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void print7(int n) {
    for (int i = n; i>0; i-- ) {

        for (int j=0; j<n-i; j++) {
            cout << " ";
        }
        for (int j=0; j< i*2-1; j++) {
            cout << "*";
        }
        for (int j=0; j<n-i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int print8(long long x) {
    int digit = 0;
    while (x > 0)
    {   
        cout << "Inside while";
        cout << x/10;
        digit = digit + 1;
        x = x/10;
        cout << x;
    }
    return digit;
}

int main() {
    print1();
    cout << endl;
    print2();
    cout << endl;
    print3();
    cout << endl;
    print4(3);
    cout << endl;
    print5(3);
    cout << endl; 
    print6(3);
    cout << endl; 
    print7(3);
    cout << endl;
    print8(7896);
    cout << endl;
}
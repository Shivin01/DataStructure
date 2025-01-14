#include<stack>
#include<iostream>
#include<vector>
#include<deque>

using namespace std;

int prec(char c) {
		if (c == '^')
			return 3;
		else if (c == '/' || c == '*')
			return 2;
		else if (c == '+' || c == '-')
			return 1;
		else
			return -1;
	}

string infixToPostfix(string exp){	

	string ans = "";
	stack<char> st;
	int n = exp.size();

	for(int i=0; i<n; i++) {

		if((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= '0' && exp[i] <= '9')) {
			ans += exp[i];
		} else if(exp[i] == '(') {
			st.push(exp[i]);
		} else if(exp[i] == ')') {
			while(!st.empty() && st.top() != '(') {
				ans += st.top();
				st.pop(); 
			}
			st.pop();
		} else {
			while(!st.empty() && prec(exp[i]) <= prec(st.top())) {
				ans += st.top();
				st.pop();				
			}			
			st.push(exp[i]);
		}
	}

	while(!st.empty()) {
		ans += st.top();
		st.pop();
	}

	return ans;
}
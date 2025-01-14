#include<stack>
#include<iostream>
#include<vector>
#include<deque>
#include<string>

using namespace std;


string prefixToInfixConversion(string &s){
	
	int n = s.size();
	stack<string> st;

	for(int i=n-1; i>=0; i--) {		
		if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
			st.push(string(1, s[i]));
		} else {
			string firstEl = st.top();
			st.pop();
			string secondEl = st.top();
			st.pop();
			string exp = '(' + firstEl + s[i] + secondEl + ')';
			st.push(exp);
		}
	}	
	return st.top();
}

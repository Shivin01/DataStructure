#include <iostream>
#include <map>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        
        int maxlen = 0, l = 0, r = 0;
        map<char, int> mpp;

        while(r < s.size()) {

            mpp[s[r]]++;
            while(mpp.size() > k) {                
                mpp[s[l]]--;
                if(mpp[s[l]] == 0) mpp.erase(s[l]);
                l = l+1;
            }
            if(mpp.size() <= k) {
                maxlen = max(maxlen, r-l+1);
            }
            r=r+1;
        }
        return maxlen;
    }
};

class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        
        int maxlen = 0, l = 0, r = 0;
        map<char, int> mpp;

        while(r < s.size()) {

            mpp[s[r]]++;
            if(mpp.size() > k) {
                mpp[s[l]]--;
                if(mpp[s[l]] == 0) mpp.erase(s[l]);
                l = l+1;
            }            
            if(mpp.size() <= k) {
                maxlen = max(maxlen, r-l+1);
            }
            r=r+1;
        }
        return maxlen;
    }
};



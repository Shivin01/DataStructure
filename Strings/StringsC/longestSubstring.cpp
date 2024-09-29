#include <iostream> 
#include <map>

using namespace std;

int main() {
    string s = "cabdzabcd";
    int n = s.size();
    int hash[256];

    fill_n(hash, 255, -1);
    int l = 0, r=0, maxLen = 0;

    while(r < n) {

        if(hash[s[r]] != -1 ) {
            if(hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }
        }
        int len = r - l + 1;
        maxLen = max(maxLen, len);
        hash[s[r]] = r;
        r++;        
    }
    cout << maxLen;
    return maxLen;
    
}


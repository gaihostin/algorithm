#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int freq[256] = {0};
        int l = 0, r = -1;
        int res = 0;
        while (l < s.size()) {
            if (r+1 < s.size() && freq[s[r+1]] == 0) {
                r++;
                freq[s[r]]++;
            } else {
                freq[s[l]]--;
                l++;
            }
            if (res <= r - l + 1) {
                res = r - l + 1;
            }
        }

        return res;
    }
};


int main() {

    string str = "bbbbbb";
    Solution *s = new Solution();
    cout << s->lengthOfLongestSubstring(str) << endl;


    delete s;



    return 0;
}
#include<iostream>
#include<string>

using namespace std;


class Solution {
public:
    string removeOuterParentheses(string S) {


        string res = "";


        int l = 0;
        int val = 0;
        for (size_t i = 0; i < S.size(); i++) {
            if (S[i] == '(') {
                val++;
            } else if (S[i] == ')') {
                val--;
                if (0 == val) {
                    res += S.substr(l+1, i - (l+1));
                    l = i+1;
                }
            }

        }

        return res;

    }
};



int main() {


    string str;
    getline(cin, str);

    Solution *s = new Solution();
    cout << s->removeOuterParentheses(str);






    return 0;
}
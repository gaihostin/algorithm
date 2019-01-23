
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        if (J.size() > 50 || S.size() > 50) {
            return 0;
        }
        if (!IsUniqueChar(J)) {
            return 0;
        }


        int result = 0;
        for (size_t i = 0; i < J.size(); i++) {

            for (size_t j = 0; j < S.size(); j++) {

                if (S[j] == J[i]) {
                    result += 1;
                }

            }

        }

        return result;
    }

    bool IsUniqueChar(string str) {
        if (str.size() > 256) {
            return false;
        }

        bool result[256] = {false};

        for (size_t i = 0; i < str.size(); ++i) {
            int tmp = str[i];
            if (result[tmp]) {
                return false;
            }
            result[tmp] = true;
        }

        return true;
    }
};

int main() {

    string J, S;
    cout << "please input J and S";
    getline(cin, J);
    getline(cin, S);

    Solution *s = new Solution();
    int res = s->numJewelsInStones(J, S);

    cout << res << endl;



    return 0;
}
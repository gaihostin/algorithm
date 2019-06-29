#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string toLowerCase(string str) {

        for (size_t i = 0; i < str.size(); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += ('a' - 'A');
            }
        }

        return str;


    }
};


int main() {


    string str;

    getline(cin, str);

    Solution *s = new Solution();
    string result = s->toLowerCase(str);

    cout << result << endl;

    return 0;
}
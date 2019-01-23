#include <iostream>
using namespace std;

class Solution {
    int sum = 0;
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        if (NULL != root) {
            if (root->val >= L && root->val <= R) {
                sum += root->val;
                rangeSumBST(root->left, L, R);
                rangeSumBST(root->right, L, R);
            } else if (root->val < L) {
                rangeSumBST(root->right, L, R);
            } else if (root->val > R) {
                rangeSumBST(root->left, L, R);
            }
        }

        return sum;
    }
};


int main() {


    return 0;
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
#include <queue>
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;

        queue<TreeNode*> q;
        if (root == nullptr)
            return result;
        q.push(root);
        while (q.empty() == false) {
            int Size = q.size();
            vector<int> res;

            for (int i = 0; i < Size; i++) {
                TreeNode* temp = q.front();
                q.pop();
                res.push_back(temp->val);
                if (temp->left != NULL)
                    q.push(temp->left);

                if (temp->right != NULL)
                    q.push(temp->right);
            }

            result.push_back(res);
        }

        return result;
    }
};
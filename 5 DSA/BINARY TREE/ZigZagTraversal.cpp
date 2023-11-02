/*
Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> v;
    if (root == NULL)
        return v;
    queue<TreeNode*> q;
    q.push(root);
    bool ltr = true;
    while (!q.empty()) {
        int s = q.size();
        vector<int> level(s);
        for (int i = 0; i < s; i++) {
            TreeNode* temp = q.front();
            q.pop();
            int index = ltr ? i : s - 1 - i;
            level[index] = temp->val;
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        v.push_back(level);
        ltr = !ltr;
    }
    return v;
}

// Function to build a binary tree from a given vector of values
TreeNode* buildTree(vector<int>& values, int index) {
    if (index >= values.size() || values[index] == -1) {
        return NULL;
    }

    TreeNode* root = new TreeNode(values[index]);
    root->left = buildTree(values, 2 * index + 1);
    root->right = buildTree(values, 2 * index + 2);

    return root;
}

int main() {
    vector<int> values = {3, 9, 20, -1, -1, 15, 7}; // Example input, replace with your own

    TreeNode* root = buildTree(values, 0);
    vector<vector<int>> result = zigzagLevelOrder(root);

    // Print the zigzag level order traversal
    for (const vector<int>& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

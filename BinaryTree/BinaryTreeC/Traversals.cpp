#include <iostream>
#include <map>
using namespace std;


/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

class TreeNode{
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

void inOrder(TreeNode* node, vector<int> &vec) {
    if(node==NULL) {
        return;
    }
    inOrder(node->left, vec);    
    vec.push_back(node->data);    
    inOrder(node->right, vec);    
}

void preOrder(TreeNode* node, vector<int> &vec) {

    if(node == NULL) {
        return;
    }
    vec.push_back(node->data);
    preOrder(node->left, vec);
    preOrder(node->right, vec);
}

void postOrder(TreeNode* node, vector<int> &vec) {

    if(node == NULL) {
        return;
    }    
    postOrder(node->left, vec);
    postOrder(node->right, vec);
    vec.push_back(node->data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<vector<int>> treeValues;
    vector<int> inOrderVec;
    vector<int> preOrderVec;
    vector<int> postOrderVec;

    inOrder(root, inOrderVec);
    preOrder(root, preOrderVec);
    postOrder(root, postOrderVec);

    treeValues.push_back(inOrderVec);
    treeValues.push_back(preOrderVec);
    treeValues.push_back(postOrderVec);

    return treeValues;
}
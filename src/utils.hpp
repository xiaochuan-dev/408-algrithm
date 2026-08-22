#pragma once

#include "tree.h"
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <vector>
#include <queue>

using namespace std;

// 从层序字符串建立二叉树
TreeNode* buildTree(const string& str) {
    if (str.empty()) return nullptr;
    
    stringstream ss(str);
    string token;
    vector<string> tokens;
    
    // 分割字符串
    while (ss >> token) {
        tokens.push_back(token);
    }
    
    if (tokens.empty() || tokens[0] == "#") return nullptr;
    
    // 创建根结点
    TreeNode* root = new TreeNode(stoi(tokens[0]));
    queue<TreeNode*> q;
    q.push(root);
    
    int i = 1;
    while (!q.empty() && i < tokens.size()) {
        TreeNode* cur = q.front();
        q.pop();
        
        // 左孩子
        if (i < tokens.size() && tokens[i] != "#") {
            cur->left = new TreeNode(stoi(tokens[i]));
            q.push(cur->left);
        }
        i++;
        
        // 右孩子
        if (i < tokens.size() && tokens[i] != "#") {
            cur->right = new TreeNode(stoi(tokens[i]));
            q.push(cur->right);
        }
        i++;
    }
    
    return root;
}
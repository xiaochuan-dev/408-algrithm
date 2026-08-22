#pragma once
#include "tree.h"
#include <cstdio>
#include <cmath>

int findNextUpper(TreeNode* root, int k) {
    TreeNode* cur = root;
    int successor = root->data;
    
    while (cur != nullptr) {
        if (cur->data >= k) {
            successor = cur->data;
            cur = cur->left;
        } else {
            cur = cur->right;
        }
    }
    return successor;
}

int findNextLower(TreeNode* root, int k) {
    TreeNode* cur = root;
    int successor = root->data;
    
    while (cur != nullptr) {
        if (cur->data <= k) {
            successor = cur->data;
            cur = cur->right;
        } else {
            cur = cur->left;
        }
    }
    return successor;
}


void searchX(TreeNode* root, int k) {
    int nextUpper = findNextUpper(root, k);
    int nextLower = findNextLower(root, k);

    if (nextUpper == k) {
        printf("%d %d\n", k, 0);
    } else {
        if (nextUpper - k == k - nextLower) {
            int sub = nextUpper - k;
            printf("%d %d\n", nextUpper, sub);
            printf("%d %d\n", nextLower, sub);
        } else {
            int num = nextUpper - k < k - nextLower ? nextUpper : nextLower;
            int sub = nextUpper - k < k - nextLower ? nextUpper - k : k - nextLower;
            printf("%d %d\n", num, sub);
        }
    }
}

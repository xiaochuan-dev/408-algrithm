// tests/simple_test.cpp
#include <gtest/gtest.h>
#include <iostream>
#include "p2026.hpp"
#include "utils.hpp"

using namespace std;

// TEST(P2026test, test1) {

//     /**
//                                                    16
//                            /                                               \
//                            8                                                 24
//                    /               \                                    /         \
//                    4               12                                  20          28
//                /       \       /       \                           /     \       /   \
//                2       6       10       14                        18     22    26     30
//              /   \   /   \   /   \   /   \                     /   \   /   \   /   \   /  \
//              1   3   5   7   9   11  13  15                  17    19  21  23 25  27  29  31
//      */
//     string str = "16 8 24 4 12 20 28 2 6 10 14 18 22 26 30 1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31";
//     TreeNode* root = buildTree(str);

//     searchX(root, 3);
// }

TEST(P2026test, test2) {
    /**
     *         10
           /       \
          5         15
        /  \       /
       3    7     12
      / \    \
     2  4     9
     */
    // string str2 = "10 5 15 3 7 12 # 2 4 # 9";

    /**
     *  10
       /  \
      5    15
     / \  / \
    3  7 12 17
      /
     6

k=6
     */
    string str2 = "10 5 15 3 7 12 17 # # 6";

    TreeNode* root = buildTree(str2);

    // searchX(root, 11);
    searchX(root, 11);

}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct TreeNode {
    vector<TreeNode*> child;
    TreeNode* parent;

    TreeNode() : parent(nullptr) {}
};

TreeNode* find(TreeNode* no1, TreeNode* no2, vector<TreeNode> &nodes) {
    vector<TreeNode*> find1;
    vector<TreeNode*> find2;

    while (no1 != nullptr) {
        find1.push_back(no1);
        no1 = no1->parent;
    }

    while (no2 != nullptr) {
        find2.push_back(no2);
        no2 = no2->parent;
    }

    for (TreeNode* node1 : find1) {
        for (TreeNode* node2 : find2) {
            if (node1 == node2) {
                return node1;
            }
        }
    }
}

int main() {
    int T, N, a, b;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;
        vector<TreeNode> nodes(N + 1);

        for (int j = 0; j < N - 1; j++) {
            cin >> a >> b;
            nodes[b].parent = &nodes[a];
            nodes[a].child.push_back(&nodes[b]);
        }

        cin >> a >> b;
        TreeNode* findnode = find(&nodes[a], &nodes[b], nodes);

        if (findnode != nullptr) {
            cout << findnode - &nodes[0] << endl; 
        }
    }

    return 0;
}

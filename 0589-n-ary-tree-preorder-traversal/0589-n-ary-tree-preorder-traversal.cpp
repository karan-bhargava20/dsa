/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
    void traverse(Node* &root , vector<int>&ans ){
        if(!root)return ;
        ans.push_back(root->val);
        for(auto child :root->children){
            traverse(child , ans );
        }
    }
public:
    // Time Complexity: O(N) where N is the number of nodes, as we visit each node once.
    // Space Complexity: O(N) in the worst case (skewed tree) due to recursion stack.
    vector<int> preorder(Node* root) {
        vector<int>ans;
        traverse(root, ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
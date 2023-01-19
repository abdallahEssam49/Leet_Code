class Solution {
public:
    vector<int>ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root)
        {
          // preorderTraversal -> push root then go to left subtree then right subtree
          /*
                 50
               /     \
              30      70
             /  \    /   \
            20   40  60   80
          print 50 first then 30 then 20 , 40 , 70 , 60 , 80
          */
          ans.push_back(root->val);
          preorderTraversal(root->left);
          preorderTraversal(root->right);
        }
        return ans;
    }
};

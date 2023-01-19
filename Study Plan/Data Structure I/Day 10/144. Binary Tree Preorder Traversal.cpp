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

// Iterative Solution

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int> nodes;
        stack<TreeNode*> temp;
        while (root || !temp.empty()) 
        {
            if (root) 
            {
                nodes.push_back(root -> val);
                if (root -> right)
                {
                    temp.push(root -> right); // to get the last right i reached and if it has sub tree or not 
                }
                root = root -> left;
            }
            else 
            {
                root = temp.top(); // when reached the most left node of left subtree
                temp.pop();
            }
        }
        return nodes;
    }
};

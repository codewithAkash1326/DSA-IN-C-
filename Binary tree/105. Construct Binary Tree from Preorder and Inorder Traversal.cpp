/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void createmap(vector<int>&inorder,map<int,int>&mp){
      for(int i=0;i<inorder.size();i++){
         mp[inorder[i]]=i;
      }
        
         
    }
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int &preindex,int size,int start,int end,map<int,int>&mp){
          
        if(preindex>size || start>end   ){
              return NULL;
        }
        
        int element = preorder[preindex];
        preindex++;
        
        int pos =  mp[element];
        
        TreeNode* root = new TreeNode(element);
        
        root->left = build(preorder,inorder,preindex,size,start,pos-1,mp);
        root->right = build(preorder,inorder,preindex,size,pos+1,end,mp);
        
        return root;
        

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int size = preorder.size();
        int start = 0;
        int end = size-1;
        int preindex=0;

        map<int,int>mp;
        createmap(inorder,mp);
        
        TreeNode* ans = build(preorder,inorder,preindex,size,start,end,mp );
        
        return ans;
    }
};

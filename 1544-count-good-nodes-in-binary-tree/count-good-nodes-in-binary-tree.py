# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        
        def dfs(node, maximum):


            if not node:

                return 0
        

            ans = 0



            if node.val >= maximum:
                ans = 1


            maximum =  max(maximum, node.val)

            ans+= dfs(node.left, maximum)
            ans += dfs(node.right,maximum)

            return ans
        
        return dfs(root,root.val)
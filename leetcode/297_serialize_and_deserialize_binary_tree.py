# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Codec:
    def serialize(self, root):
        def dfs(root):
            if root == None:
                ans.append("$")
                return
            ans.append(str(root.val))
            dfs(root.left)
            dfs(root.right)
            
        ans = []
        dfs(root)
        return ",".join(ans)

    def deserialize(self, data):
        nodes = data.split(",")
        self.i, size = 0, len(nodes)
        
        def dfs():
            if self.i == size or nodes[self.i] == "$":
                self.i += 1
                return None
            root = TreeNode(int(nodes[self.i]))
            self.i += 1
            root.left = dfs()
            root.right = dfs()
            return root
        
        return dfs()

# Your Codec object will be instantiated and called as such:
# Your Codec object will be instantiated and called as such:
# ser = Codec()
# deser = Codec()
# tree = ser.serialize(root)
# ans = deser.deserialize(tree)
# return ans
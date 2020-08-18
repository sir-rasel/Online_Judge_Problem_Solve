class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if len(matrix) == 0:
            return list()
        
        row = len(matrix)
        column = len(matrix[0])
        
        linear_matrix = [0] * (row * column)
        
        idx , left, right, up, down, direction = 0, 0, column - 1, 0, row - 1, 0
        
        while idx < (row * column):
            if direction == 0:
                for i in range(left, right + 1):
                    linear_matrix[idx] = matrix[up][i]
                    idx += 1
                up += 1
            elif direction == 1:
                for i in range(up, down + 1):
                    linear_matrix[idx] = matrix[i][right]
                    idx += 1
                right -= 1
            elif direction == 2:
                for i in range(right, left - 1, -1):
                    linear_matrix[idx] = matrix[down][i]
                    idx += 1
                down -= 1
            else:
                for i in range(down, up - 1, -1):
                    linear_matrix[idx] = matrix[i][left]
                    idx += 1
                left += 1
            
            direction = (direction + 1) % 4
        
        return linear_matrix
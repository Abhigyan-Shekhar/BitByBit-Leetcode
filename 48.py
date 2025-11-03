class Solution(object):
    def rotate(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        n = len(matrix)
        
        rotated = []
        
        
        for col in range(n):
            new_row = []
            
            for row in range(n - 1, -1, -1):
                new_row.append(matrix[row][col])
            rotated.append(new_row)
        
        
        for i in range(n):
            for j in range(n):
                matrix[i][j] = rotated[i][j]

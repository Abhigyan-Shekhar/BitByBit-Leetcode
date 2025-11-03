class Solution(object):
    def transpose(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[List[int]]
        """
        rows = len(matrix)
        cols = len(matrix[0])
        result = []

        for j in range(cols):
            new_row = []
            for i in range(rows):
                new_row.append(matrix[i][j])
            result.append(new_row)
        
        return result

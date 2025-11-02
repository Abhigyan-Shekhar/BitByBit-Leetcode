class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        pairs = [(val, idx) for idx, val in enumerate(nums)]
        pairs.sort(reverse=True)
        for i in range(len(pairs)):
            val1, idx1 = pairs[i]
            need = target - val1  
            for j in range(i + 1, len(pairs)):
                val2, idx2 = pairs[j]

                if val1 + val2 == target:  
                    return [idx1, idx2]
        return []

class Solution:
    def distinctDifferenceArray(self, nums):
        n = len(nums)
        prefix = [0]*n
        suffix = [0]*n
        
        seen = set()
        for i in range(n):
            seen.add(nums[i])
            prefix[i] = len(seen)
        
        seen.clear()
        for i in range(n-1, -1, -1):
            seen.add(nums[i])
            suffix[i] = len(seen)
        
        diff = []
        for i in range(n):
            diff.append(prefix[i] - (suffix[i+1] if i+1 < n else 0))
        
        return diff

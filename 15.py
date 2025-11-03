class Solution(object):
    def threeSum(self, nums):
        nums.sort()
        res = set()
        n = len(nums)

        for i in range(n):
            seen = set()  
            for j in range(i + 1, n):
                target = -(nums[i] + nums[j])

                if target in seen:
                    triplet = tuple(sorted([nums[i], nums[j], target]))
                    res.add(triplet)
                else:
                    seen.add(nums[j])

        return [list(t) for t in res]

class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        self.nums = nums
        self.target = target
        n = len(nums)
        for i in range(n - 1):
            for j in range(i + 1, n):
                if nums[i] + nums[j] == target:
                    print([i, j])


"""nums = [3, 2, 4, 5, 6, 7, 9, 10]
target = 11
solved = Solution()

solved.twoSum(nums, target)"""
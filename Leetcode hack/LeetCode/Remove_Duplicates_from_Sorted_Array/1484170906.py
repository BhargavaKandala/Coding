class Solution(object):
    def removeDuplicates(self, nums):
    
        if not nums:
            return 0

        write_index = 1  # Start writing from the second position

        for read_index in range(1, len(nums)):
            if nums[read_index] != nums[read_index - 1]:
                nums[write_index] = nums[read_index]
                write_index += 1

        return write_index

            
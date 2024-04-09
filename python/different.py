from sys import stdin

for line in stdin:
    nums = [int(x) for x in line.split()]
    print(abs(nums[0] - nums[1]))

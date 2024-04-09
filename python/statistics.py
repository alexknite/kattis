from sys import stdin

count = 1
for line in stdin:
    nums = [int(x) for x in line.split()][1:]
    minimum = min(nums)
    maximum = max(nums)
    ranges = maximum - minimum
    print(f'Case {count}: {minimum} {maximum} {ranges}')
    count += 1
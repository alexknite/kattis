n = int(input())

for x in range(n):
    line = input()
    if line == 'P=NP':
        print('skipped')
    else:
        nums = [int(x) for x in line.split('+')]
        print(nums[0] + nums[1])
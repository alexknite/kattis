while True:
    nums = [int(x) for x in input().split()]
    if nums[0]==0 and nums[1]==0:
        break
    elif nums[0] + nums[1] == 13:
        print('Never speak again.')
    elif nums[0] < nums[1]:
        print('Left beehind.')
    elif nums[0] > nums[1]:
        print('To the convention.')
    else:
        print('Undecided.')
input_ = [int(x) for x in input().split()]
nums = input_[2]
for num in range(1, nums + 1):
    if num % input_[0] == 0 and num % input_[1] == 0:
        print("FizzBuzz")
    elif num % input_[0] == 0:
        print("Fizz")
    elif num % input_[1] == 0:
        print("Buzz")
    else:
        print(num)

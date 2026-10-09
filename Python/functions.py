# def functionName():
#     # code


# KVargs
# def add(a,b):
#     print(a+b)

# add(10,50,60)


def add(*nums):
    # tuple
    # a = (10,20,30,40)
    sum =0
    for i in nums:
        sum+=i
    print(sum)

add(10,20,30,40)


nums = (10,20,30,40)
print(nums[0])
print(nums[1])
print(nums[2])
print(nums[3])
sum = 0
for i in nums:
    sum+=i
print(sum)
# random
import random

print(random.randint(999,10000))
# choices
lis = ["apple","banana","cherry","kiwi"]

print(random.choice(lis))


# statistics
import statistics
# mean

# median
list1 = [80,90,70,85,95]
print(statistics.median(list1))
# stdev
print(statistics.stdev(list1))

# re
import re
# value = input("Enter your text with digit:")
# # This is mymobile number 545444444
# if re.search(r"[0-9]",value):
#     print("Digit found")
# else:
#     print("Not found")



password = input("Enter your Password:")

pattern = r"^(?=.*[A-Z])(?=.*[a-z])(?=.*[0-9])(?=.*[@#$%&!])[A-Za-z0-9@#$%&!]{8,}$"


# ?=.*[A-Z] -> atleast one letter must be A-Z
if re.fullmatch(pattern,password):
    print("Strong Password")
else:
    print("Weak Password")
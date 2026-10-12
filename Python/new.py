# math
# import entire module
import math
print(math.sqrt(25))
# 5

# Import Specific function
from math import sqrt
print(sqrt(16))
# 4*4 = 16/4->


# import with alias
import math as m
print(m.factorial(5))
# fact->5->5*4*3*2*1->120


# import Everthing
from math import *

print(sqrt(49))


# random

import random

print(random.randint(99999,999999))
rands = random.random()
print(rands)

import statistics

print(statistics.mean([8,22,30]))

import datetime

print(datetime.date.today())


print(sqrt(3))


# dir()

print(dir(math))


def displays():
    print("Student Details")
print("Module Loaded")

if __name__ == "__main__":
    displays()
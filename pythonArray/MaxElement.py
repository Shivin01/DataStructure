from sys import *
from collections import *
from math import *

def largestElement(arr: [], n: int) -> int:

    # Write your code from here.
    # max_num = arr[0]
    # for i in range(n):
    #     if (max_num < arr[i]):
    #         max_num = arr[i]
    
    arr.sort()

    return arr[-1]
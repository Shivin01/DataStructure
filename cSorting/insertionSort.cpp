from os import *
from sys import *
from collections import *
from math import *

from typing import List

def insertionSort(n: int, arr: List[int]) -> None:
    # Write your code here.
    # pass

    for i in range(n-1):
        for j in range(i+1, 0, -1):
            # print(arr[j])
            if arr[j] < arr[j-1]:
                temp = arr[j-1]
                arr[j-1] = arr[j]
                arr[j] = temp
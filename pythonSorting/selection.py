from os import *
from sys import *
from collections import *
from math import *

def selectionSort(arr,n):
    # Write your code here
    # Do not return anything. Update the given array in-place
    for i in range(n-1):
        min_i = i
        for j in range(i, n):
            if arr[j] < arr[min_i]:
                min_i = j
        temp = arr[min_i]
        arr[min_i] = arr[i];
        arr[i] = temp;
from os import *
from sys import *
from collections import *
from math import *


def partiton(arr, low, high):

    pivot= arr[low]
    i = low
    j = high

    while i < j:
        while arr[i] <= pivot and i <= high - 1:
            i = i+1
        while arr[j] > pivot and j >= low + 1:
            j = j-1
        
        if(i<j):
            temp = arr[i]
            arr[i] = arr[j]
            arr[j] = temp
    temp = arr[low]
    arr[low] = arr[j]
    arr[j] = temp
    return j
    

def qs(arr, low, high):
    if low<high:
        pIndex = partiton(arr, low, high)
        qs(arr, low, pIndex-1)
        qs(arr, pIndex+1, high)

def quickSort(arr):
    # Write the function here.
    qs(arr, 0, len(arr)-1)
    return arr


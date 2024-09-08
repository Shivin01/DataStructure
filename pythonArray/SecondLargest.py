from os import *
from sys import *
from collections import *
from math import *

from sys import stdin
import sys

def findSecondLargest(sequenceOfNumbers):
    # Write your code here.
    largest = sequenceOfNumbers[0];
    secondLargest = pow(-10, 9)

    for i in range(len(sequenceOfNumbers)):

        if largest < sequenceOfNumbers[i]:
            secondLargest = largest
            largest = sequenceOfNumbers[i]
        elif sequenceOfNumbers[i] < largest and sequenceOfNumbers[i] > secondLargest:
            secondLargest = sequenceOfNumbers[i]
    
    if secondLargest == pow(-10, 9):
        secondLargest = -1

    return secondLargest
















# Taking input using fast I/O.
def takeInput():
    n = int(input())

    sequenceOfNumbers = list(map(int, input().strip().split(" ")))

    return sequenceOfNumbers, n

# Main.
t = int(input())
while t:
    sequenceOfNumbers, n = takeInput()
    print(findSecondLargest(sequenceOfNumbers))
    t = t-1

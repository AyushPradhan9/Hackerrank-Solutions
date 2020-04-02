import math
import os
import random
import re
import sys

# Complete the miniMaxSum function below.
def miniMaxSum(arr):
    arr.sort()
    sum1=0
    sum2=0
    for i in range(4):
        sum1+=arr[i+1]
    for i in range(4):
        sum2+=arr[i]
    print(sum2,sum1) 

if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)

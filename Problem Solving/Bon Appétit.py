import math
import os
import random
import re
import sys

# Complete the bonAppetit function below.
def bonAppetit(bill, k, b):
    s=0
    for i in bill:
        s+=i
    g=b-((s-bill[k])/2)
    if g==0:
        print("Bon Appetit")
    else:

        print("{0:.0f}".format(g))

if __name__ == '__main__':
    nk = input().rstrip().split()

    n = int(nk[0])

    k = int(nk[1])

    bill = list(map(int, input().rstrip().split()))

    b = int(input().strip())

    bonAppetit(bill, k, b)
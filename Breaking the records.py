#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the breakingRecords function below.
def breakingRecords(scores):
    mx=scores[0]
    mn=scores[0]
    cmax,cmin=0,0
    for i in range(0,len(scores)):
        if(scores[i]>mx):
            mx=scores[i]
            cmax+=1
        else:
            if(scores[i]<mn):
                mn=scores[i]
                cmin+=1
    return(cmax,cmin)

        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()

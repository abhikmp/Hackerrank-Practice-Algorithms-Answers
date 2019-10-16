#!/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    l=len(s)
    if(s[-2]=='P'):
        
        s=s[0:l-2]
        s=s.split(":")
        if(s[0]!='12'):
            a=int(s[0])
            a+=12
            s[0]=str(a)
            return(":".join(s))
        else:
            s[0]='12'
            return(":".join(s))
    else:
        s=s[0:l-2]
        s=s.split(":")
        if(s[0]=='12'):
            s[0]='00'
        return(":".join(s))
   
   
    
if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    f.write(result + '\n')

    f.close()

import sys
import math
import bisect
import heapq
from collections import defaultdict, deque, Counter
from itertools import combinations, permutations

input = lambda: sys.stdin.readline().strip()
si = lambda: input()
ii = lambda: int(input())
mi = lambda: map(int, input().split())
li = lambda: list(map(int, input().split()))

MOD = 10**9 + 7
INF = float('inf')

def Solve():
    a,b=mi()
    res=[]
    for i in range (0,a):
        ml=si()
        ms=set(ml)
        if(len(ms)==1):
            res.append(ml[0])
        elif(len(ms)!=1):
            print("NO")
            return
    for i in range(0, len(res)-1):
        if(int(res[i+1])-int(res[i])==0):
            print("NO")
            return
    print("YES")



if __name__ == '__main__':
    # t = ii()
    # for _ in range(t):
    Solve()
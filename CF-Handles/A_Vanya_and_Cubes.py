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
st = lambda: set(map(int, input().split()))

MOD = 10**9 + 7
INF = float('inf')

def Solve():
    n=ii()
    lvl=0
    for i in range (1, 10001):
        if(n-(i*(i+1)/2)>=0):
            lvl+=1
        n=n-i*(i+1)/2
    print(lvl)

if __name__ == '__main__':
    # t = ii()
    # for _ in range(t):
    Solve()
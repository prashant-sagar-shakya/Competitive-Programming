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
    n=ii()
    d=li()
    a,b=mi()
    sum=0
    for i in range(a-1, b-1):
        sum=sum+d[i]
    print(sum)

if __name__ == '__main__':
    # t = ii()
    # for _ in range(t):
    Solve()
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
    n,t=mi()
    tr=240-t
    cnt=0
    val =  0
    for i in range (1, n+1):
        val = val + 5*i
        if(tr >= val):
            cnt+=1
    print(cnt)


if __name__ == '__main__':
    # t = ii()
    # for _ in range(t):
    Solve()
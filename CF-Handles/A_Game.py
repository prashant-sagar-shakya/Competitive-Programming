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
    n1,n2,k1,k2=mi()
    if(n2>=n1):
        print("Second")
    else:
        print("First")

if __name__ == '__main__':
    # t = ii()
    # for _ in range(t):
    Solve()
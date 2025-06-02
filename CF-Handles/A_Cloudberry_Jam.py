import sys
import math
import bisect
import heapq
from collections import defaultdict, deque, Counter
from itertools import combinations, permutations

input = lambda: sys.stdin.readline().strip()

MOD = 1000000007
INF = float('inf')
YES = 'YES'
NO = 'NO'

def solve():
    n=int(input())
    print(2*n)

if __name__ == '__main__':
    sys.setrecursionlimit(10**6)
    t = int(input())
    for _ in range(t):
        solve()
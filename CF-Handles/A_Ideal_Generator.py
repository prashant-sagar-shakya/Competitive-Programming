import sys
import math
import bisect
import heapq
from collections import defaultdict, deque, Counter
from itertools import combinations, permutations

input = lambda: sys.stdin.readline().strip()

MOD = 1000000007
INF = float('inf')

def solve():
    val=int(input())
    if val%2:
        print("YES")
    else:
        print("NO")

if __name__ == '__main__':
    sys.setrecursionlimit(10**6)
    t = int(input())
    for _ in range(t):
        solve()
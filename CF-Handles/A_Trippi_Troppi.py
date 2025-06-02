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
    s=input()
    print(s[0],end="")
    for i in range(1, len(s)):
        if s[i]==' ':
            print(s[i+1], end="")
    print()

if __name__ == '__main__':
    sys.setrecursionlimit(10**6)
    t = int(input())
    for _ in range(t):
        solve()
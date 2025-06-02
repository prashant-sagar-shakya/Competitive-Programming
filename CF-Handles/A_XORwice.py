import sys
import math
import bisect
import heapq
from collections import defaultdict, deque, Counter
from itertools import combinations, permutations

input = lambda: sys.stdin.readline().strip()
ii = lambda: int(input())
mi = lambda: map(int, input().split())
li = lambda: list(map(int, input().split()))

MOD = 10**9 + 7
INF = float('inf')

def solve():
    a,b=mi() 
    print((a^min(a,b)) + (b^min(a,b)))

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        solve()
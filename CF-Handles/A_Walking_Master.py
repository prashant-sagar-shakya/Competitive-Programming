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
    x1, y1, x2, y2 = map(int, input().split())
    dx = x2 - x1
    dy = y2 - y1
    if dy < 0 or dy < dx:
        print(-1)
    else:
        print(2 * dy - dx)

if __name__ == '__main__':
    t = ii()
    for _ in range(t):
        Solve()
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
    n, s = mi()
    a = li()
    s += sum(a)
    sm = 0
    cnt = 0
    for i in range(1, s + 1):
        if sm >= s:
            break
        sm += i
        cnt = i
    if sm != s or max(a) > cnt or cnt <= n:
        print("NO");
    else:
        print("YES")

if __name__ == '__main__':
    t = ii()
    for _ in range(t):
        Solve()
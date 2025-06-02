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
    n = ii()
    a = li()
    a.sort()
    ans = 0
    for i in range(n - 2):
        if a[i] != 0 and a[i] == a[i+2]:
            ans = -1
            break
    if ans != -1:
        for i in range(n - 1):
            if a[i] != 0 and a[i] == a[i+1]:
                ans += 1
    print(ans)

if __name__ == '__main__':
    # t = ii()
    # for _ in range(t):
    Solve()

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
    n = ii()
    a = li()
    a.sort()
    if a[0] % 2 == 1:
        print("YES")
        return
    for x in a:
        if x % 2 == 1:
            print("NO")
            return
    print("YES")

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        solve()
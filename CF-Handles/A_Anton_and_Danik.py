import sys
import math
import bisect
import heapq
import time
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
    n=ii()
    s=si()
    a=0
    d=0
    for i in s:
        a, d = (a + 1, d) if i == 'A' else (a, d + 1)
    if a>d:
        print("Anton")
    elif a<d:
        print("Danik")
    else:
        print("Friendship")


if __name__ == '__main__':
    start = time.perf_counter()
    t = 1
    # t = ii()
    for _ in range(t):
        Solve()
    end = time.perf_counter()
    duration_ms = (end - start) * 1000
    # print(f"{int(duration_ms)} ms", file=sys.stderr)
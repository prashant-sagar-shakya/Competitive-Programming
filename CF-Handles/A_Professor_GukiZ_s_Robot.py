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
    p1=li()
    p2=li()
    print(max(abs(p1[0]-p2[0]), abs(p1[1]-p2[1])))

if __name__ == '__main__':
    # t = ii()
    # for _ in range(t):
    Solve()
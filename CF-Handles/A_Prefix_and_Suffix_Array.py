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
lsi = lambda: list(map(str, input().split()))

MOD = 10**9 + 7
INF = float('inf')

def Solve():
    n=ii()
    inp=lsi()
    comp=[]
    for x in inp:
        if(len(x)==n-1):
            comp.append(x)
    if comp[0]==comp[1][::-1]:
        print("YES")
    else:
        print("NO")

if __name__ == '__main__':
    t = ii()
    for _ in range(t):
        Solve()
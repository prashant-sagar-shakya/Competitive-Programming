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
    s,a,n=mi()
    while(True):
        s_move=math.gcd(n,s)
        n-=s_move
        if n<0:
            print(1)
            return
        a_move=math.gcd(n,a)
        n-=a_move
        if n<0:
            print(0)
            return




if __name__ == '__main__':
    # t = ii()
    # for _ in range(t):
    Solve()
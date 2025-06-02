# n.m+1 should be not prime m 1-n, print m
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

def isprime(n:int):
    if n<=1:
        return False
    elif n==2 or n==3:
        return True
    elif n%2==0 or n%3==0:
        return False
    for i in range (5, int(math.sqrt(n))+1, 6):
        if n%i==0 or n% (i+2)==0:
            return False
    return True

def Solve():
    n=ii()
    for i in range (1, 1001):
        if not isprime(n*i+1):
            print(i)
            return

if __name__ == '__main__':
    # t = ii()
    # for _ in range(t):
    Solve()
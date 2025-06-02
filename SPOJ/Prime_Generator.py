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
    a,b=mi()
    for i in range (a,b+1):
        if(isprime(i)):
            print(i)
    print()

if __name__ == '__main__':
    t = ii()
    for _ in range(t):
        Solve()
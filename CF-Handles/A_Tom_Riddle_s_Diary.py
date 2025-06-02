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
    n=ii()
    name_list=[]
    for i in range(0,n):
        name=si()
        if(name in name_list):
            print("YES")
        else:
            print("NO")
            name_list.append(name)


if __name__ == '__main__':
    # t = ii()
    # for _ in range(t):
    Solve()
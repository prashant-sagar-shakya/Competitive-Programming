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
    ip=si()
    if (ip[0] == 'a' or ip[0]=='h') and (ip[1]=='1' or ip[1] == '8'):
        print (3)
    elif (ip[0] == 'a' or ip[0]=='h') and (ip[1] != '1' or ip[1] != '8'):
        print (5)
    elif (ip[0] != 'a' or ip[0] !='h') and (ip[1]=='1' or ip[1] == '8'):
        print (5)
    else:
        print(8)

if __name__ == '__main__':
    # t = ii()
    # for _ in range(t):
    Solve()
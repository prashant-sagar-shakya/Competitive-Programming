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
    expr = si().replace(" ", "")

    precedence = {'+': 1, '-': 1, '*': 2, '/': 2, '^': 3}
    right_associative = {'^'}

    output = []
    stack = []

    for token in expr:
        if token.isalpha():
            output.append(token)
        elif token == '(':
            stack.append(token)
        elif token == ')':
            while stack and stack[-1] != '(':
                output.append(stack.pop())
            stack.pop()
        elif token in precedence:
            while (stack and stack[-1] != '(' and (precedence[stack[-1]] > precedence[token] or (precedence[stack[-1]] == precedence[token] and token not in right_associative))):
                output.append(stack.pop())
            stack.append(token)

    while stack:
        output.append(stack.pop())

    print(''.join(output))


if __name__ == '__main__':
    t = ii()
    for _ in range(t):
        Solve()

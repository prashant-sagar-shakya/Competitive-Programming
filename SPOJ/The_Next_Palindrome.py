import sys
input = lambda: sys.stdin.readline().strip()
ii = lambda: int(input())

def next_palindrome(n_str):
    length = len(n_str)
    half = (length) // 2
    even = (length % 2 == 0)

    if even:
        left = n_str[:half]
        new_pal = left + left[::-1]
    else:
        left = n_str[:half+1]
        new_pal = left + left[:-1][::-1]

    if new_pal > n_str:
        return new_pal
    else:
        # Increment the middle and form again
        if even:
            incremented = str(int(left) + 1).zfill(len(left))
            new_pal = incremented + incremented[::-1]
        else:
            incremented = str(int(left) + 1).zfill(len(left))
            new_pal = incremented + incremented[:-1][::-1]
        return new_pal

def Solve():
    t = ii()
    for _ in range(t):
        n = input()
        print(next_palindrome(n))

if __name__ == '__main__':
    Solve()
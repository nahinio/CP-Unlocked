t = int(input())

for _ in range(t):
    n = int(input())
    p = list(map(int, input().split()))

    wrong = [p[i] for i in range(n) if p[i] != i + 1]
    wrong.reverse()

    j = 0
    for i in range(n):
        if p[i] != i + 1:
            p[i] = wrong[j]
            j += 1

    print("YES" if p == list(range(1, n + 1)) else "NO")
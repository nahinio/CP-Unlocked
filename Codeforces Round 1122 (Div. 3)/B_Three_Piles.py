t = int(input())

for _ in range(t):
    a, b, c = map(int, input().split())

    d = a - b
    ans = max(abs(d), abs(d + c))

    print(ans)
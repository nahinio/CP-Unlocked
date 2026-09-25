t = int(input())
for _ in range(t):
    n, c = input().split()
    n = int(n)
    s = input()
    cost = 0
    for i in range(n // 2):
        a = s[i]
        b = s[n - 1 - i]
        if a != b:
            if a == c or b == c:
                cost += 1
            else:
                cost += 2
    print(cost)
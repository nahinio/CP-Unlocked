t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    if s[0] == '1':
        ans = s[1:].count('0')
        print(ans)
        continue

    total_ones = s.count('1')
    cost = total_ones
    best = cost

    k = n
    while k > 1:
        if s[k-1] == '1':
            cost -= 1
        else:
            cost += 1
        k -= 1
        if s[k] == '1':
            if cost < best:
                best = cost

    print(best)
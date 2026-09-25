t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    cnt = {}
    for x in a:
        cnt[x] = cnt.get(x, 0) + 1
    vals = sorted(cnt.keys(), reverse=True)
    mx = max(cnt.values())
    res = []
    for k in range(1, mx + 1):
        for v in vals:
            if cnt[v] >= k:
                res.append(v)
    print(*res)
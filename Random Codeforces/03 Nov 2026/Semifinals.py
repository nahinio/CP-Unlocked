n = int(input())
a, b = [], []
for _ in range(n):
    x, y = map(int, input().split())
    a.append(x)
    b.append(y)

s1 = ['0'] * n
s2 = ['0'] * n
for i in range(n):
    if i < n // 2:
        s1[i] = s2[i] = '1'
    if a[i] < b[n - 1 - i]:  
        s1[i] = '1'
    if b[i] < a[n - 1 - i]:
        s2[i] = '1'

print(''.join(s1))
print(''.join(s2))
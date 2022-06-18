n = int(input())

anos = [0];

for i in range(n):
    a = [int(k) for k in input().split()]
    if a[1] > len(anos):
        anos.extend(([0] * (a[1]-len(anos))))


print(max(anos));
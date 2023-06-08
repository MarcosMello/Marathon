m, n = [int(i) for i in input().split()]

e = []

for i in range(m):
    e.append([int(i) for i in input().split()])

p = int(input())

v = 0

for i in range(p):
    tmp = [int(i) for i in input().split()]

    if e[tmp[0] - 1][tmp[1] - 1] > 0:
        e[tmp[0] - 1][tmp[1] - 1] -= 1
        v += 1

print(v)

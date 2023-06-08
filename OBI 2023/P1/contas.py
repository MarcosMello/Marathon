v = int(input())

c = []

for i in range(3):
    c.append(int(input()))

c.sort()

s = 0

for i in c:
    if i <= v:
        v -= i
        s += 1

print(s)

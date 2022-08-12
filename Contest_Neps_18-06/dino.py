""" n = int(input())

anos = [0];

for i in range(n):
    a = [int(k) for k in input().split()]

    if (a[1] > len(anos)):
        anos.extend([0] * (a[1] - len(anos)));

    for j in range(a[0], a[1]+1):
        anos[j-1] += 1;

print(max(anos)); """

""" n = int(input())

viv = []
maxa = 0

for i in range(n):
    a = [int(k) for k in input().split()]
    viv.append(a)

    if (a[1] > maxa):
        maxa = a[1]

anos = [0] * maxa

for i in range(1, maxa):
    for j in viv:
        if (i in range(j[0], j[1]+1)):
            anos[i] += 1

print(max(anos)) """

n = int(input())

dino = []

for i in range(n):
    r = [int(k) for k in input().split()]
    dino.append([r[0], False])
    dino.append([r[1], True])

dino.sort()

print(dino);

exit();

maxdino = -1
attdino = 0

for i in range(len(dino)):
    if not (dino[i][1]):
        attdino += 1
    else:
        attdino -= 1

    if (attdino > maxdino):
        maxdino = attdino

print(maxdino)
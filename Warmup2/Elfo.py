casos = int(input())

resp = []

for i in range(casos):
    renas = []

    lista = list(map(int, input().split()))

    for j in range (lista[0]):
        l = input().split()
        l[1] = int(l[1])
        l[2] = int(l[2])
        l[3] = float(l[3])

        renas.append(l)

    sRenP = sorted(renas, reverse = True, key = lambda renas: renas[1])
    nl = sRenP[:lista[1]]
    a, b = lista[1]-1, lista[1]

    while True:
        if (b < len(sRenP)) and (sRenP[a][1] == sRenP[b][1]):
            b += 1
            nl.append(sRenP[b])
        else:
            break

    #while True:


for i in range(casos):
    print(f"CENARIO {{{i+1}}}")
    print(f"1 - {resp[i][0][0]}")
    print(f"2 - {resp[i][1][0]}")
    print(f"3 - {resp[i][2][0]}")
    print(f"4 - {resp[i][3][0]}")
    print(f"5 - {resp[i][4][0]}")
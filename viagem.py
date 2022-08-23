def bc(j, vres):
    possiveis = [i for i in rotas if (i[1] == j[0] and i[3] <= vres)]
    for i in possiveis:
        if (saida == i[0] and vres - i[3] >= 0):
            
        

v, n, m = [int(i) for i in input().split()]

rotas = [];

for i in range(m):
    a, b, t, p = [int(i) for i in input().split()]
    rotas.append([a, b, t, p])

saida, chegada = [int(i) for i in input().split()]

if saida == chegada:
    print(-1);
else:
    possiveis = [i for i in rotas if (i[1] == chegada and i[3] <= v)]
    for i in possiveis:
        bc(i, v-i[3]);
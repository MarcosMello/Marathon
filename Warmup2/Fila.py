loops = int(input())

notas = []
mov = []

for i in range(loops):
    qAl = int(input())
    notas.append(list(map(int, input().split())))

for i in range(loops):
    oNotas = notas[i][:]
    oNotas.sort(reverse = True)

    nMov = len(oNotas)

    for j in range (len(oNotas)):
        if notas[i][j] != oNotas[j]:
            nMov -= 1

    mov.append(nMov)

for i in range(len(mov)):
    print(mov[i])

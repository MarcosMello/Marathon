paises = []
mG = []
mS = []
mB = []

lista = []

while True:
    try:
        _ = input()

        pG = input()
        pS = input()
        pB = input()

        if pG in paises:
            mG[paises.index(pG)] += 1
        else:
            paises.append(pG)
            mG.append(1)
            mS.append(0)
            mB.append(0)

        if pS in paises:
            mS[paises.index(pS)] += 1
        else:
            paises.append(pS)
            mS.append(1)
            mG.append(0)
            mB.append(0)

        if pB in paises:
            mB[paises.index(pB)] += 1
        else:
            paises.append(pB)
            mB.append(1)
            mS.append(0)
            mG.append(0)

    except EOFError:
        break

for i in range(len(paises)):
    lista.append([paises[i], mG[i], mS[i], mB[i]])

lista.sort(reverse = True, key = lambda lista: lista[1])

#i, j =

#while True: #lista prata e remove ouro


#print(lista)
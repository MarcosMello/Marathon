def condicao(x):
    return x["o"], x["p"], x["b"]

paises = []

while True:
    try:
        p = input()
        pc = input()
        sc = input()
        tc = input()

        try:
            paises[paises.index(pc)+1][0] += 1
        except:
            paises.append(pc)
            paises.append([1, 0, 0])

        try:
            paises[paises.index(sc)+1][1] += 1
        except:
            paises.append(sc)
            paises.append([0, 1, 0])

        try:
            paises[paises.index(tc)+1][2] += 1
        except:
            paises.append(tc)
            paises.append([0, 0, 1])
    except:
        break

l2 = []
i = 0

while i < len(paises):
    l2.append({"nome":paises[i], "o":paises[i+1][0], "p":paises[i+1][1], "b":paises[i+1][2]})
    i += 2

keys = [ (condicao, True), (lambda x: x["nome"], False) ]
for key, rev in reversed(keys):
    l2 = sorted(l2, key=key, reverse=rev)

print("Quadro de Medalhas")

for i in range(len(l2)):
    print(l2[i]["nome"], end = ' ')
    print(l2[i]["o"], end = ' ')
    print(l2[i]["p"], end = ' ')
    print(l2[i]["b"])
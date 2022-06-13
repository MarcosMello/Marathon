c = int(input(""))

lista = []
laux = []
pos = []

for i in range(c):
    laux = [int(i) for i in input().split()]
    lista.append(laux)
    if 0 in laux:
        pos.append(i)
        pos.append(laux.index(0))

linha = pos[0] + 1 if pos[0] < c-1 else pos[0] - 1

somac = sum(lista[linha]);
somaf = sum(lista[pos[0]])
num = somac - somaf

print(num)
print(pos[0] + 1)
print(pos[1] + 1)
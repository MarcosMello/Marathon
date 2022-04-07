nF = int(input())

lista = []

for i in range(nF):
    lista.append(list(map(int, input().split())))

lista = sorted(lista, key = lambda lista: lista[0])


v = list(input())

v = list(input().split())

a = v.count("A")
c = v.count("C")
g = v.count("G")
t = v.count("T")

lista = [a,c,g,t]

maior = 0

for i in range (4):
    if (lista[i] > maior):
        maior = lista[i]

print(maior)
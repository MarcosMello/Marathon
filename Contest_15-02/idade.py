m = int(input(""))
a = int(input(""))
b = int(input(""))

c = m-(a+b)

lista = [a, b, c]

maior = 0

for i in range (3):
    if lista[i] > maior:
        maior = lista[i]

print(maior)
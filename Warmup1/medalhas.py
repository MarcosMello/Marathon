n1 = int(input(""))
n2 = int(input(""))
n3 = int(input(""))

menor = 1000
maior = 0

a = [n1, n2, n3]

for i in range (3):
    if a[i] > maior:
        maior = a[i]
    if a[i] < menor:
        menor = a[i]

p = a.index(menor)
u = a.index(maior)
m = 0

for i in range(3):
    if a[i] != a[p] and a[i] != a[u]:
        m = i
        break

print(p+1)
print(m+1)
print(u+1)
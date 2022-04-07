doces = int(input(""))
q1 = int(input(""))
q2 = int(input(""))
q3 = int(input(""))

menor = 1000
maior = 1

a = [q1, q2, q3]
a.sort()

e, soma = 0, 0

for i in range(3):
    if (soma+a[i]) <= doces:
        soma += a[i]
        e += 1

print(e)
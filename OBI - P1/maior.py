n = int(input(""))
m = int(input(""))
s = int(input(""))

lista = []

for i in range(n, m+1, 1):
    soma = 0
    num = i;
    while num >= 10:
        numf = num - ((num//10)*10)
        num = num//10
        soma += numf
    soma += num
    
    if (soma == s):
        lista.append(i)

if (len(lista) == 0):
    print(-1)
else:
    print(lista[-1])
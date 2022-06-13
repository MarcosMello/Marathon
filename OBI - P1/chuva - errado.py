n = int(input())
s = int(input())
x = [int(i) for i in input().split()]

qnt = 0;

feitos = []

for i in range(n+1):
    for j in range(n):
        fat = x[j:j+i]
        if sum(fat) == s and fat not in feitos:
            qnt += 1
            feitos.append(fat)
            
print(qnt)
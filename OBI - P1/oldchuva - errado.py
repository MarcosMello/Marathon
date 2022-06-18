n = int(input())
s = int(input())
x = []

qnt = 0;

for i in input().split():
    x.append(int(i))
    if (int(i) == s):
        qnt += 1

for i in range(n-1):
    print(x[i:])

for i in range(2, n):
    print(x[:i])

# if (sum(x[i:]) == s):
#         qnt += 1

#geração de sub conjuntos, tem no maratona.oberlan.com
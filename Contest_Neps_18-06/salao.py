from math import factorial

n = int(input())

C = []
D = []

comb = 1;

for i in range(n):
    n_f = input().split()
    if (n_f[1] == "C"):
        C.append(n_f[0])
    else:
        D.append(n_f[0])

for i in range(len(C)):
    comb *= factorial(len(D)-i);

print(comb)
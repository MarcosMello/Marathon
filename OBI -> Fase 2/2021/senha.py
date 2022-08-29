n, m, k = [int(i) for i in input().split()];
senha = input();

palavras = [];
letras = [];

j = 0;

for i in range(m):
    palavras.append("".join(sorted(input())));

p = int(input())
p -= 1;

comb = pow(k, m);

for i in range(1, m+1):
    l = p//(comb//pow(k, i));

    if (l >= k):
        qnt = l//k;
        l -= k * qnt;

    letras.append(palavras[(i-1)][l]);

for i in range(len(senha)):
    if (senha[i] == '#'):
        print(letras[j], end = "");
        j += 1;
    else:
        print(senha[i], end = "");

print();
n = int(input())
palavra = input()

maior = 0;

for i in range(n):
    for j in range(i, n):
        palavra2 = palavra[i:j+1]
        if (palavra2 == palavra2[::-1]):
            if (maior < len(palavra2)):
                maior = len(palavra2)

print(maior)

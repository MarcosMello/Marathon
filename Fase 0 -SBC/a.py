n = int(input()); #alunos

alunos = []

for i in range(n):
    nome = input()
    notas = [float(j) for j in input().split()]

    if len(notas) == 4:
        notas.remove(min(notas));

    if len(notas) == 1:
        notas.append(0);

    media = round(sum(notas)/len(notas), 1);

    alunos.append([nome, media]);

for i in alunos:
    print(f"{i[0]}: {i[1]}");
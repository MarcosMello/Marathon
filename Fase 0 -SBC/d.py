n = int(input());
v = list(input());

alunos_alt = []
alunos_nota = [0, 0, 0, 0, 0];

for i in range(n):
    for j in range(5):
        plv = (list(input()));
        if ("".join(plv) == "".join(v)):
            alunos_nota[j] += 1;
        else:
            for k in range(len(plv)):
                if (k < len(v)):

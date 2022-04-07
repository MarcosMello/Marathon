def carac(x):
    return x["idade"], x["altura"], x["nome"]

qT = int(input())

for i in range(qT):
    renas = []
    rec = input().split()
    r = int(rec[0])
    rA = int(rec[1])

    for j in range (r):
        info = input().split()
        renas.append({"nome": info[0], "peso":int(info[1]), "idade":int(info[2]), "altura": float(info[3])})

    keys = [(lambda x: x["peso"], True), (carac, False)]
    for key, rev in reversed(keys):
        renas = sorted(renas, key = key, reverse = rev)

    print(f"CENARIO {{{i+1}}}")
    for k in range(rA):
        print(f"{k+1} - {renas[k]['nome']}")

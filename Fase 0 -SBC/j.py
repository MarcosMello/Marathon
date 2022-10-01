N = int(input())
O = []
out = [""] * N
cont = 0
final = 0

for i in range(N):
    O = list(input().split())
    converte = int(O[0])
    if O[1] == "1T":
        if converte > 45:
            final = converte - 45
            converte = 45
    else:
        converte += 45
        if converte > 90:
            final = converte - 90
            converte = 90
    out[cont] = f"{converte}{''if final == 0 else f'+{final}'}"
    cont += 1
    final = 0

for i in range(N):
    print(out[i])
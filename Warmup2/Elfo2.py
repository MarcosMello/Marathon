class rena:
    def __init__(self, nome, peso, idade, altura):
        self.nome = nome
        self.peso = peso
        self.idade = idade
        self.altura = altura

    def __repr__(self):
        return f"{self.nome}"

    def __lt__(self, p):
        if (self.peso < p.peso):
            return False
        elif (self.peso == p.peso):
            if (self.idade < p.idade):
                return True
            elif (self.idade == p.idade):
                if (self.altura < p.altura):
                    return True
                elif(self.altura == p.altura):
                    if self.nome < p.nome:
                        return True
                    else:
                        return False
                else:
                    return False
            else:
                return False
        else:
            return True

qT = int(input())

for i in range(qT):
    renas = []
    rec = input().split()
    r = int(rec[0])
    rA = int(rec[1])

    for j in range (r):
        info = input().split()
        renas.append(rena(info[0], int(info[1]), int(info[2]), float(info[3])))

    renas.sort()

    print(f"CENARIO {{{i+1}}}")
    for k in range(rA):
        print(f"{k+1} - {renas[k]}")
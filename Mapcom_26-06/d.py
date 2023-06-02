def converte(i):
    return 1 if i == "UP" else 0 if i == "DOWN" else -1

class cone:
    def __init__(self, ind, ip):
        self.ind = ind
        self.ip = ip
    
    def __lt__(self, cone):
        if (self.ind == cone.ind):
            return self.ip < cone.ip
        
        return self.ind < cone.ind

e1 = input().split()
e2 = input().split()

if (e1[0] == "GT"):
    gt = [converte(i) for i in e1]
    tb = [converte(i) for i in e2]
else:
    gt = [converte(i) for i in e2]
    tb = [converte(i) for i in e1]

n = int(input())

entrada = []

for i in range(n):
    x = input().split()
    e = cone(int(x[1]), x[0])
    entrada.append(e)

entrada.sort()

cGT = []
cTB = []

for i in range(len(entrada)):
    if (i != 0):
        for x in (cGT):
            if (entrada[i].ind - x > 30):
                cGT.remove(x)
        for x in (cTB):
            if (entrada[i].ind - x > 30):
                cTB.remove(x)

    tmp = int(entrada[i].ind // 10) + 1

    if (gt[tmp] and tb[tmp]):
        if (len(cGT) < len(cTB) or len(cGT) == len(cTB)):
            cGT.append(entrada[i].ind)

            print(f"{entrada[i].ip} GT")
        elif (len(cTB) < len(cGT)):
            cTB.append(entrada[i].ind)

            lTB = entrada[i].ind
            
            print(f"{entrada[i].ip} TB")
    elif (gt[tmp]):
        cGT.extend(cTB)
        cTB.clear()

        cGT.append(entrada[i].ind)

        lGT = entrada[i].ind

        print(f"{entrada[i].ip} GT")
    elif (tb[tmp]):
        cTB.extend(cGT)
        cGT.clear()

        cTB.append(entrada[i].ind)

        lTB = entrada[i].ind

        print(f"{entrada[i].ip} TB")
    else:
        cTB.clear()
        cGT.clear()

        print(f"{entrada[i].ip} P0 - CORRE QUE EH CRISE")



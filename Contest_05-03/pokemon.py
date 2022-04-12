qP = list(map(int, input().split()))
pA = list(map(int, input().split()))

if len(pA) != qP[0]:
    for i in range((qP[0] - len(pA))):
        pA.append(int(input()))

pJ = list(map(int, input().split()))

if len(pJ) != qP[1]:
    for i in range((qP[1] - len(pJ))):
        pJ.append(int(input()))

pA.sort();
pJ.sort();

feitos = []

if (pJ[-1] >= pA[-1]):
    print(-1)
else:
    c = 0
    f = len(pA) - 1
    i = 0

    while c <= f and i < len(pJ):
        m = (c+f)//2
        if (pA[m] <= pJ[i]):
            c = m + 1
        else:
            if (m == 0) or (pA[m-1] <= pJ[i]):
                feitos.append(pJ[i])
                pA.pop(m)
                i += 1
                c, f = 0, len(pA) - 1
            else:
                f = m-1
    if pJ == feitos:
        print("a")
    else:
        print(-1)

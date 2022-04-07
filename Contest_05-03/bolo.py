p = int(input())
qB = int(input())
bolos = sorted(list(map(int, input().split())))
if len(bolos) != qB:
    for i in range(qB - len(bolos)):
        bolos.append(int(input()))

nums = list(range(1, bolos[-1]+1))

flag = False

m = 0

l = 0
r = len(nums) -1

if p != 1:
    while r >= l:
        m = (l+r)//2
        soma = 0
        i = len(bolos)
        while i > 0:
            i -= 1
            x = bolos[i]//m
            if (soma + x) > p:
                l = m + 1
                break
            soma += x

        if soma == p and i == 0:
            mA = m
            while r >= l:
                m += 1
                soma = 0
                i = len(bolos)
                while i > 0:
                    i -= 1
                    x = bolos[i]//m
                    if (soma + x) > p:
                        l = m + 1
                        break
                    soma += x
                if soma != p:
                    m = mA
                    break
                else:
                    mA = m
            break
        elif soma < p and i == 0:
            r = m - 1
else:
    m = bolos[0]
print(m)
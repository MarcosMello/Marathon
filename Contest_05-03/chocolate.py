q = int(input())
t = list(map(int, input().split()))

m = 0
j = len(t)

meio = (((len(t)+1)//2)-1) if (q%2 != 0) else (len(t)//2)-1

sm = sum(t[:meio])
sj = sum(t[(meio+1):j])

if sm > sj:
    flag = False

    sm = sum(t[:meio])
    sj = sum(t[(meio):j])

    i = 0

    while sm > sj:
        i += 1
        sm = sum(t[:meio-i])
        sj = sum(t[(meio-i):j])
        flag = True

    i -= 1

    if flag:
        m = len(t[:meio-i])
        j = len(t[(meio-i):j])
    else:
        m = len(t[:meio])
        j = len(t[(meio+1):j]) + 1

else:
    flag = False

    sm = sum(t[:meio] + [t[meio]])
    sj = sum(t[(meio+1):j])

    i = 0

    while sm < sj:
        i += 1
        sm = sum(t[:meio] + [t[(meio+i)]])
        sj = sum(t[(meio+i):j])
        flag = True

    if flag:
        l1 = t[:meio]
        for z in range(i):
            l1 += [t[(meio+z)]]

    m = len(l1) if flag else len(t[:meio]) + 1
    j = len(t[(meio+i):j]) if flag else len(t[(meio+1):j])

print(m, j)
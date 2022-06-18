a = ['A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f', 'G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', 'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y', 'Z', 'z']

pd = [];
t = []

p = input().split()
c = [char for char in input()]

for i in p:
    t.append(len(i))
    px = [char for char in i]
    pd.extend(px)

lpd = len(pd);
lc = len(c)

cn = c[:]

if (lpd > lc):
    v = lpd - lc
    xv = v//lc
    oc = v - (xv * lc)

    if(xv > 0):
        cn.extend(c*xv)
    if(oc > 0):
        cn.extend(c[:oc])
elif(lpd < lc):
    cn = cn[:lpd]

final = []
palavra = []
nc = 0;

for i in range(lpd + 1):
    if (nc == t[0]):
        final.append("".join(palavra))
        if (len(t) == 1):
            break
        palavra = []
        nc = 0
        t = t[1:]

    p = a.index(cn[i]) + a.index(pd[i])
    if (p > 52):
        qm = p//52;
        p -= 52*qm;
    palavra.append(a[p])

    nc += 1;

print(" ".join(final))
q = int(input())
t = list(map(int, input().split()))

m = 0
j = len(t)-1

while m <= j:
    sm = sum(t[:m])

    tj = t[:]
    tj.reverse()
    js = (len(t)-1)-j

    sj = sum(tj[:js])

    if sm > sj:
        j -= 1
    else:
        m += 1

print(m, ((len(t)-1)-j))

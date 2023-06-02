c = [int(i) for i in input().split()]
p = [int(i) for i in input().split()]

c.sort()

if ((c[1] <= p[0] and c[0] <= p[1]) or (c[0] <= p[0] and c[1] <= p[1])):
    print("S")
else:
    print("N")
n = int(input())

l = []
nl = []

for i in range(n):
    l.append(input())

nl.append("".join(sorted(l[:], key = lambda i: (len(i), i))))
nl.append("".join(sorted(l[:], reverse = True, key = lambda i: (len(i), i))))

nl.sort()
print(nl[0])
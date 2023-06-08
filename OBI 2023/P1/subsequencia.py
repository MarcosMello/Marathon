t1, t2 = [int(i) for i in input().split()]

l1 = [int(i) for i in input().split()]
l2 = [int(i) for i in input().split()]

i = 0
j = 0

while i < t1 and j < t2:
    if l1[i] == l2[j]:
        i += 1
        j += 1
    else:
        i += 1

print("S" if j == t2 else "N")

def casa(l, soma):
    i, j = 0, len(l)-1

    while i != j:
        if (l[i] + l[j]) == soma:
            return [l[i], l[j]]
        elif (l[i] + l[j]) < soma:
            i += 1
        else:
            j -= 1

    return []

qnt = int(input())

l= []

for i in range(qnt):
    l.append(int(input()))

soma = int(input())

l2 = casa(l, soma)

print(f"{l2[0]} {l2[1]}")
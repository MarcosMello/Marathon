l1 = list(map(int, input().split()))

qAlg = l1[0]
min = l1[1]

l2 = list(map(int, input().split()))
l2.sort()

alg = 0

for i in range(len(l2)):
    if (min - l2[i] < 0):
        break
    else:
        min -= l2[i]
        alg += 1

print(alg)
tmp = input().split();
n = int(tmp[0]);
m = int(tmp[1]);

l = []

for i in range(n):
    l += [i+1];

for i in range(m):
    tmp2 = input().split();
    b = int(tmp2[0]) - 1;
    n = int(tmp2[1]);

    l[b] = n;

for i in l:
    print(i);
nm = input("").split()
b = input("").split()
c = input("").split()

p = 0;

for i in b:
    if (i in c):
        p += 1;

print(p);
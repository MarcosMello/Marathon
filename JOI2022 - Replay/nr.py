n = int(input(""));
s = input("").split();

su = set(s);
nu = [];

nl = [];

for i in su:
    nl += [len([j for j in s if(j == i)])]
    nu.append(int(i));

menor = min(nl);

if (nl.count(menor) == 1):
    print(nu[nl.index(menor)]);
else:
    menorn = 3000;
    while nl.count(menor) != 0:
        if nu[nl.index(menor)] < menorn:
            menorn = nu[nl.index(menor)];
            nl[nl.index(menor)] = 0;
        else:
            nl[nl.index(menor)] = 0;
    print(menorn)
qnt = int(input());
marg = [int(i) for i in input().split()]

jovem = 0
adulta = 0
idosa = 0

for i in marg:
    if (i == 1):
        i += 1;
        adulta += 1;
    elif (i == 2):
        i += 1;
        idosa += 1;
        jovem += 1;

print(f"Jovem: {jovem}")
print(f"Adulta: {adulta}")
print(f"Idosa: {idosa}")
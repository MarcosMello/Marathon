d = int(input(""));
a = int(input(""));
n = int(input(""))

data = 32-n;

if (n >= 16):
    print((d + (14*a)) * data)
elif (n == 1):
    print(31 * d)
else:
    n -= 1
    print((d + (n * a)) * data)

i = int(input(""))
f = int(input(""))

v1 = (f // 12)
v = f - 12 * v1

nh = i + v;

if nh > 12:
    nh -= 12;

print(nh);
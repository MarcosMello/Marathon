c = int(input())
d = int(input())
t = int(input())

r = t - (d/c)

if (r > 0):
    print(f"0.0");
else:
    print(f"{round(abs(r), 1)}");
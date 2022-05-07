n = int(input(""));
s = input("");

c = 0;

if ('A' in s):
    c += 1;
if ('B' in s):
    c += 1;
if ('C' in s):
    c += 1;
if ('D' in s):
    c += 1;
if ('E' in s):
    c += 1;

if (c >= 3):
    print("YES");
else:
    print("NO");
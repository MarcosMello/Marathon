n = int(input(""));
k = int(input(""));
s = input("");

r = [i for i in s if (i == "R")];

if (len(r) == k):
    print("W");
else:
    print("R");
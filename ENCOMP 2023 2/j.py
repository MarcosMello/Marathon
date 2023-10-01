s = input()
p = input()

if (len(s) > len(p)):
    print("NAO")
else:
    pS = 0
    pP = 0
    
    while(len(s) > pS and len(p) > pP):
        if (s[pS] == p[pP]):
            pS += 1
        
        pP += 1
    
    print(("SIM" if pS == len(s) else "NAO"))
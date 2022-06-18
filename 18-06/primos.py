num = int(input())

primo = True;

if (num != 3 and num != 2 and num != 5 and num != 7 and num != 11 and num != 13):
    if (num == 1):
        primo = False;
    elif (num % 2 == 0):
        primo = False;
    elif (num % 3 == 0):
        primo = False
    elif (num % 5 == 0):
        primo = False;
    elif (num % 7 == 0):
        primo = False;
    elif (num % 11 == 0):
        primo = False;
    elif (num % 13 == 0):
        primo = False;

print("talvez") if primo else print("definitivamente nao primo")
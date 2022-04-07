def binarysort(list, x):
    l = 0
    r = len(list) - 1

    while r >= l:
        m = l + (r-l) //2 #or (l+r)//2
        if list[m] == x:
            return m
        elif list[m] > x:
            r = m - 1
        else:
            l = m + 1

    return None

l = [3,5,10,15,19,26,29,35]

print("Achei") if binarysort(l, 22) else print("Não Achei!")
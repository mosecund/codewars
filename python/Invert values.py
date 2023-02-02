def invert(lst):
    if lst == []:
        lst = []

    else:
        for i in range(len(lst)):
            lst[i] *= (-1)

    return lst
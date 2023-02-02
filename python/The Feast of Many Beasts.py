def feast(beast, dish):
    if beast[-1] == dish[-1] and beast[0] == dish[0]:
        res = True
    else:
        res = False

    return res
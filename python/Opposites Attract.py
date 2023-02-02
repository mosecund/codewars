def lovefunc(flower1, flower2):
    if flower1 % 2 == 0 and flower2 % 2 != 0:
        res = True

    elif flower2 % 2 == 0 and flower1 % 2 != 0:
        res = True

    else:
        res = False

    return res
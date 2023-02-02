def how_much_i_love_you(nb_petals):

    list = ['I love you','a little','a lot','passionately','madly','not at all']
    if nb_petals>6:
        while nb_petals > 6:
            nb_petals -= 6

    res = list[nb_petals-1]

    return res
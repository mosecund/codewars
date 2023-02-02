def disemvowel(string):
    final = list(string)
    res_1 = ""
    vowels = ["A", "E", "I", "O", "U", "a", "e", "i", "o", "u"]

    res = []
    for i in final:
        for j in i:
            if j not in vowels:
                res.append(j)

    separator = ', '
    separator.join(res)

    for i in res:
        res_1 += i

    return res_1
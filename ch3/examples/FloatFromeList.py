def FloatFromList(list0):
    items = list0.strip().split()
    valide_number = []

    for item in items:
        try:
            valide_number.append(float(item))

        except ValueError:
            print(f'{item}不是数字！已跳过')
    return valide_number
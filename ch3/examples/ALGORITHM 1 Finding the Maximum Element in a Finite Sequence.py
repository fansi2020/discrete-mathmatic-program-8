def MaxFromList(list1):
    if not list1:
        return None

    Max_number = list1[0]
    for i in list1:
        if Max_number < i:
            Max_number = i
    return Max_number

def FloatFromList(list0):
    items = list0.strip().split()
    valide_number = []

    for item in items:
        try:
            valide_number.append(float(item))

        except ValueError:
            print(f'{item}不是数字！已跳过')
    return valide_number

    

test_list = input('至少输入一个数字： ')

print(f'最大的数字是{MaxFromList(FloatFromList(test_list))}')
from FloatFromeList import *


def denomination(mianzhi, value):
    if not mianzhi:
        return

    number = value//mianzhi[0]
    print(f'需要{number}个{mianzhi[0]}')

    if len(mianzhi) > 1:
        denomination(mianzhi[1:], value % mianzhi[0])


mianzhi = FloatFromList(input('输入一列面值（由大到小！）： '))
value = float(input('输入要找零的钱: '))

denomination(mianzhi, value)

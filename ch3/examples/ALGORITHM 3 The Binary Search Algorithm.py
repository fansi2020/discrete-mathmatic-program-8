from FloatFromeList import *

def BinSearch(list1, a, upper = None, lower = 0):
    if upper == None: upper = len(list1) - 1
    if upper == lower:
        assert a == list1[upper]
        return upper + 1
        

    else:
        middle = (upper + lower)//2
        if a > list1[middle]:
            return(BinSearch(list1, a, upper, middle + 1))
        else:
            return(BinSearch(list1, a, middle, lower))
        

list1 = input('输入一个数组，由大到小或者相反： ')

a = float(input('输入你想找的数字： '))

print(f'你要找的在第{BinSearch(FloatFromList(list1), a)}位')

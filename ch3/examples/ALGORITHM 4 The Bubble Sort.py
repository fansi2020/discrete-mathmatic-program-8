from FloatFromeList import *

def BobSearch(substance):
    for i in range(len(substance) - 1):
        for j in range(len(substance) - i - 1):
            if substance[j] > substance[j + 1]:
                substance[j],substance[j + 1] = substance[j+1],substance[j]
                
    return substance

list1 = input('输入一个数组：')

sorted_list = BobSearch(FloatFromList(list1))
print(f'排列好的数组：{sorted_list}')

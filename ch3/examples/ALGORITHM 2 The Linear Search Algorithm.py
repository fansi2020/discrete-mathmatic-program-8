#from FloatFromeList import *

def LineSearch(list1, a):
    for index, list_value in enumerate(list1):
        if a == list_value:
            return index + 1

list1 = input('输入一个数组或其他一组量，逗号分割： ')
#list2 = FloatFromList(list1)
a = input('输入你想找到的数，东西: ')

print(f'你想找的数字,东西在第{LineSearch(list1.strip().split(","), a)}位')

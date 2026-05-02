"""用递归来解决问题，首先有两个列表，第一个是已经排好序的列表，第二个是等待排序的列表，
插入排序的这个函数接受这两个列表，返回一个已经排好序的列表。
首先检查最简单的情况，如果待排序的列表为空，则直接返回已排序的列表，
如果待排序的列表不为空，将其中的第一个元素取出，并与已排序的列表中的所有元素比较，并插入到合适的位置。得到两个新列表
然后再次调用这个函数"""

def insert_sorted(sorted_list, value):
    """将 value 插入到 sorted_list 中合适的位置"""
    if not sorted_list:
        return [value]
    elif value < sorted_list[0]:
        return [value] + sorted_list
    else:
        return [sorted_list[0]] + insert_sorted(sorted_list[1:], value)

def recursive_insertion_sort(sorted_list, unsorted_list):
    """递归插入排序函数"""
    if not unsorted_list:
        return sorted_list
    else:
        # 取出第一个待排序的元素
        current = unsorted_list[0]
        # 插入到已排序列表中
        new_sorted = insert_sorted(sorted_list, current)
        # 递归处理剩余的待排序元素
        return recursive_insertion_sort(new_sorted, unsorted_list[1:])

if __name__ == __main__:
    # 示例使用
    unsorted = [4, 2, 7, 1, 3]
    sorted_result = recursive_insertion_sort([], unsorted)
    print(sorted_result)

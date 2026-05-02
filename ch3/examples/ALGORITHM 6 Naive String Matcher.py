def nativestringmatcher(imput_text, matcher):
    for i in range(len(input_text) - len(matcher) + 1):
        j = 1
        while((j < len(matcher)) and (matcher[j] == input_text[i + j])):
            j+=1
        if (j == len(matcher)):
            print(f'在你输入的text的第{i + 1}位')

input_text = input('输入一个文本： ')
matcher = input('输入你想查找的一段文字： ')
nativestringmatcher(input_text, matcher)

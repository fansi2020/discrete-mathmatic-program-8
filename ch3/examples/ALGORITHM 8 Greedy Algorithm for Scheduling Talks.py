from Insertion_Sort import *

talks = []

print("请输入讲座（格式：标题 时 分 秒 时 分 秒），按 Ctrl+D（Linux/Mac）或 Ctrl+Z 回车（Windows）结束：")

try:
    while True:
        line = input()
        if not line.strip():
            continue
        parts = line.strip().split()
        title = parts[0]
        st_h, st_m, st_s = map(int, parts[1:4])
        et_h, et_m, et_s = map(int, parts[4:7])
        start_seconds = tm_to_seconds(st_h, st_m, st_s)
        end_seconds = tm_to_seconds(et_h, et_m, et_s)
        talks.append(Talk(title, start_seconds, end_seconds))
except EOFError:
    pass

scheduled = schedule_talks(talks)

print("\n安排的讲座有：\n")
for talk in scheduled:
    print(f"标题：{talk.title}")
    print(f"开始时间：{seconds_to_str(talk.start_time)}")
    print(f"结束时间：{seconds_to_str(talk.end_time)}\n")

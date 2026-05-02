class Talk:
    def __init__(self, title, start_time, end_time):
        self.title = title
        self.start_time = start_time  # 秒数
        self.end_time = end_time      # 秒数

def tm_to_seconds(h, m, s):
    return h * 3600 + m * 60 + s

def seconds_to_str(seconds):
    h = seconds // 3600
    m = (seconds % 3600) // 60
    s = seconds % 60
    return f"{h:02d}:{m:02d}:{s:02d}"

def insertion_sort_talks(talks):
    for i in range(1, len(talks)):
        key_talk = talks[i]
        j = i - 1
        while j >= 0 and talks[j].end_time > key_talk.end_time:
            talks[j + 1] = talks[j]
            j -= 1
        talks[j + 1] = key_talk
    return talks

def schedule_talks(talks):
    sorted_talks = insertion_sort_talks(talks)
    result = []
    last_end_time = 0
    for talk in sorted_talks:
        if talk.start_time >= last_end_time:
            result.append(talk)
            last_end_time = talk.end_time
    return result

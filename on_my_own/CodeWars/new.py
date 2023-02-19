def solution(roman):
    newMyDict={
        'I': 1,
        'V':5,
        'X':10,
        'L':50,
        'C':100
    }
    newVal =0
    for key, value in newMyDict.items():
        for i in roman:
            if i == key:
                newVal+=value
    return newVal

print(solution("XLC"))
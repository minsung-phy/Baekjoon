# 내가 푼 답
a = int(input("시험 성적을 입력하세요. (0~100): "))

while not(0 <= a <= 100):
    a = int(input("시험 성적을 입력하세요. (0~100): "))

if 90 <= a <= 100:
    print("A")
elif 80 <= a <= 89:
    print("B")
elif 70 <= a <= 79:
    print("C")
elif 60 <= a <= 69:
    print("D")
else:
    print("F")

# 정답
a = int(input())

if a >= 90:
    print("A")
elif a >= 80:
    print("B")
elif a >= 70:
    print("C")
elif a >= 60:
    print("D")
else:
    print("F")
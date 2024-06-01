from cs50 import get_int

scores = []
for i in range(3):
    scores.append(get_int("score: "))
    #---OR---
    score = get_int("score: ")
    scores += [score] #----OR---- scores = scores + [score]
average = sum(scores) / len(scores)
print(f"{average}")
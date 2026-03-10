digits = int (input())
steps = 0
number = 1
multiplier = 1
final = 0

while steps <= digits :
    print(number)
    multiplier *= 10
    number += 1
    number = number + ( number * multiplier )
    steps += 1

# print 1 , mult 10 , number 2 , 
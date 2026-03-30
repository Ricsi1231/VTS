numberList = [7, 2, 4, 5, 3, 6, 8, 1]
inverseCounter = 0
counter = 0

while counter < 8:
    for i in range(8):
        if numberList[counter] > numberList[i]:
            inverseCounter = inverseCounter + 1
    counter = counter + 1

print(inverseCounter) 
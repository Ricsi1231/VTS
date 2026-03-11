clear
clc             

counter = 1

for a = 0.01 : 0.01 : 7.08
    for b = 0.01 : 0.01 : 7.08
        for c = 0.01 : 0.01 : 7.08
            for d = 0.79 : 0.19 : 7.08
                mySum = a + c + b + d
                if (mySum == 7.11)
                    myProduct = a * c * b * d 
                    if (myProduct == 7.11)
                        break
                    endif
                endif
            endfor
        endfor
    endfor
endfor
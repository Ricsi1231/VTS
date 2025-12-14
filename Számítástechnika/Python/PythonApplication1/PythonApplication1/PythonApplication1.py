a_mennyiseg = 0
b_mennyiseg = 0
betuMennyiseg = 0
betu = ""

print("Mennyi betut szeretne be vinni?")
betuMennyiseg = int(input())

print("Betuk")

for i in range(betuMennyiseg):  
    betu = input() 

    if betu == "a" or betu == "A":
        a_mennyiseg = a_mennyiseg + 1

    if betu == "b" or betu == "B":
        b_mennyiseg = b_mennyiseg + 1

print("A betuk szama:")
print(a_mennyiseg)

print("B betuk szama:")
print(b_mennyiseg)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
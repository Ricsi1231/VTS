# Robotika hazi
# Nagy Richard 25223020 Mechatronika
import math

x = -3
y = -2
l1 = 4
l2 = 3

x_square = pow(x, 2)
y_square = pow(y, 2)
l1_square = pow(l1, 2)
l2_square = pow(l2, 2)

cosQ2 = (x_square + y_square - l1_square - l2_square) / (2 * l1 * l2)
print("cos(q2) = ", cosQ2)
print("")

sinQ2 = math.sqrt(1 - pow(cosQ2, 2))
sinQ2_prim = 1 * sinQ2
sinQ2_secunder = -1 * sinQ2
print("sin Q2 prim", sinQ2_prim)
print("sin Q2 secunder", sinQ2_secunder)
print("")

Q2_prim = math.atan2(sinQ2_prim, cosQ2)
print("Q2 prim", Q2_prim)
print("")

Q2_secunder = math.atan2(sinQ2_secunder, cosQ2)
print("Q2 secunder", Q2_secunder)
print("")

Q1_prim = math.atan2(y, x) - math.atan2(l2 * sinQ2_prim, l1 + l2 * cosQ2)
print("Q1 prim", Q1_prim)
print("")

Q1_secunder = math.atan2(y, x) - math.atan2(l2 * sinQ2_secunder, l1 + l2 * cosQ2)
print("Q1 secunder", Q2_prim)
print("")

xTcp_Prim = l1 * math.cos(Q1_prim) + l2 * math.cos(Q1_prim + Q2_prim)
yTcp_Prim = l1 * math.sin(Q1_prim) + l2 * math.sin(Q1_prim + Q2_prim)

xTcp_Secunder = l1 * math.cos(Q1_secunder) + l2 * math.cos(Q1_secunder + Q2_secunder)
yTcp_Secunder = l1 * math.sin(Q1_secunder) + l2 * math.sin(Q1_secunder + Q2_secunder)

print("x TCP Prim", xTcp_Prim)
print("Y TCP Prim", yTcp_Prim)

print("x TCP Secunder", xTcp_Secunder)
print("Y TCP Secunder", yTcp_Secunder)
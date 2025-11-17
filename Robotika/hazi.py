# Robotika hazi
# Nagy Richard 25223020
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

sinQ2 = math.sqrt(1 - pow(cosQ2, 2))
sinQ2_prim = 1 * sinQ2
sinQ2_secunder = -1 * sinQ2
print("sin Q2 prim", sinQ2_prim)
print("sin Q2 secunder", sinQ2_secunder)

Q2_prim = math.atan2(sinQ2_prim, cosQ2)
print("Q2 prim", Q2_prim)

Q2_secunder = math.atan2(sinQ2_secunder, cosQ2)
print("Q2 secunder", Q2_secunder)

Q1_prim = math.atan2(sinQ2, cosQ2) - math.atan2(l2 * sinQ2_prim, l1 + l2 * cosQ2)
print("Q1 prim", Q1_prim)

Q1_secunder = math.atan2(sinQ2, cosQ2) - math.atan2(l2 * sinQ2_secunder, l1 + l2 * cosQ2)
print("Q1 secunder", Q2_prim)
"""
            Solutions
  =============================
  cos(q2)            = -0.5

  sin(Q2) Primary:    0.8660254037844386
  sin(Q2) Secondary: -0.8660254037844386

  Q2 Primary:     2.0943951023931957 rad  (120°)
  Q2 Secondary:  -2.0943951023931957 rad (-120°)

  Q1 Primary:     1.2897614252920833 rad  (73.9°)
  Q1 Secondary:   2.0943951023931957 rad  (120°)
"""
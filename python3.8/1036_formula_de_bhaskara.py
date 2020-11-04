from math import sqrt
a, b, c = input().split()

a = float(a)
b = float(b)
c = float(c)

try:
    delta = b**2 - 4*a*c
    x1 = (-b + sqrt(delta))/(2*a)
    x2 = (-b - sqrt(delta))/(2*a)

    print(f'R1 = {x1:.5f}')
    print(f'R2 = {x2:.5f}')
except (ZeroDivisionError, ValueError):
    print('Impossivel calcular')

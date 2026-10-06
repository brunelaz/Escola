import math

print("Calculadora de equação de segundo grau\n")
a = float(input("Digite o valor de A:"))
b = float(input("Digite o valor de B:"))
c = float(input("Digite o valor de C:"))

delta = (b*b) - 4 * a * c
if delta < 0:
    print("O valor de delta é inválido!")
else: 
    raizdelta = math.sqrt(delta)
    x1 = (-b + raizdelta) / (2 * a)
    x2 = (-b - raizdelta) / (2 * a)
    print("As raizes são:", x1, "e", x2)
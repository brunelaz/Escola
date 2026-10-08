import math

a = float(input("Digite o A: "))
b = float(input("Digite o B: "))
c = float(input("Digite o C: "))


delta = (b*b) - 4 * a * c
if delta < 0:
    print("Não dá pra continuar a conta com o delta negativo")
else:
    raizdelta = math.sqrt(delta)

    x1 = (-b + raizdelta) / (2*a)

    x2 = (-b - raizdelta) / (2*a)

    print("Primeira Raiz: ", x1)
    print("Segunda Raiz: ", x2)

import math

a = float(input("Digite o A: "))
b = float(input("Digite o B: "))
c = float(input("Digite o C: "))

def eqseg(a,b,c):
    x1 = float
    x2 = float

    delta = (b*b) - (4 * a * c)
    raizdelta = math.sqrt(delta)

    x1 = (-b - raizdelta) / 2*a

    x2 = (-b + raizdelta) / 2*a

    print("Primeira Raiz: ", x1)
    print("Segunda Raiz: ", x2)

eqseg(a, b, c)
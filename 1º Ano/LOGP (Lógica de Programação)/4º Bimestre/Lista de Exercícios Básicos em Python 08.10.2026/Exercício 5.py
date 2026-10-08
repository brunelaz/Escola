x1 = float(input("Digite o primeiro numero: "))
x2 = float(input("Digite o segundo número: "))
simb = input("Digite o operador matemático: ")

resp = float
if simb == "+":
    resp = x1+x2
if simb == "-":
    if x2>x1:
        resp = x2 - x1
    else:
        resp = x1 - x2
if simb == "*" :
    resp = x1 * x2
if simb == "/":
    resp = x1 / x2

print("Resposta:", resp)
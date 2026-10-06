a = float(input("Digite o valor do primeiro lado do triângulo: "))
b = float(input("Digite o valor do segundo lado do triângulo: "))
c = float(input("Digite o valor do segundo lado do triângulo: "))

if a >=b+c or b>=a+c or c>=a+b:
     print("Os valores digitados nao formam um triangulo!")
else:
    if a==b and b==c and a==c:
        print("O triangulo digitado é equilátero")
    elif a!=b and a!=c and b!=c:
        print("O triângulo digitado é escaleno")
    else:
        print("O triângulo digitado é isósceles")

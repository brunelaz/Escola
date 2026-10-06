a = input("Digite o primeiro valor: ")
b = input("Digite o segundo valor: ")
c = input("Digite o terceiro valor: ")

valores_ordenados = sorted([a, b, c])
print(*valores_ordenados, sep=", ")
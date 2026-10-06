A = []
B = []
encontrado = 0

for i in range(5):
    valor = int(input(f"Digite A[{i + 1}]: "))
    A.append(valor)

for i in range(5):
    B.append(A[i] * 5)

print("Matriz B: ")
print(B)

pesq = int(input(f"Digite um valor para pesquisar: "))
for i in range(5):
    if pesq == B[i]:
        print(f"Seu valor foi encontrado! Está na posição {i}")
        encontrado = 1
if encontrado == 0:
    print("Seu valor não foi encontrado!")
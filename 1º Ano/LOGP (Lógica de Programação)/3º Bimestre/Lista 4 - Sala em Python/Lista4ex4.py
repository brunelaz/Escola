A = []
B = []
C = []

for i in range(5):
    valor = int(input(f"Digite A[{i+1}]: "))
    A.append(valor)

for i in range(5):
    valor = int(input(f"Digite B[{i+1}]: "))
    B.append(valor)

C = A + B

print("Matriz C: ")
print(C)
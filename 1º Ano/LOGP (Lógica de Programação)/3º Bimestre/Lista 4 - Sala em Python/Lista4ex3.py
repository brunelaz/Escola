import math
A = []
B = []
C = []

for i in range(5):
    valor = int(input(f"Digite A[{i+1}]: "))
    A.append(valor)

for i in range(5):
    valor = int(input(f"Digite B[{i+1}]: "))
    B.append(valor)

for i in range(5):
    C.append(A[i] - B[i])

print("Matriz C: ")
print(C)
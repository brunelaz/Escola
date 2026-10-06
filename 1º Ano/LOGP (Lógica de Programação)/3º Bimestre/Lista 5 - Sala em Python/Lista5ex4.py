A = []
B = []
C = []

for i in range(12):
    valor = int(input(f"Digite A[{i+1}]: "))
    A.append(valor)

A.sort()

for i in range(12):
    valor = int(input(f"Digite B[{i+1}]: "))
    B.append(valor)

B.sort()

for i in range(12):
    C.append(A[i] + B[i])

C.sort()

print("Matriz C: ")
print(C)
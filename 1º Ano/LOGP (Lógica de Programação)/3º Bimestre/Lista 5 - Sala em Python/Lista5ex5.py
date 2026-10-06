A = []
B = []
C = []

for i in range(2):
    valor = int(input(f"Digite A[{i+1}]: "))
    A.append(valor)

for i in range(3):
    valor = int(input(f"Digite B[{i+1}]: "))
    B.append(valor)

C = A + B

C.sort(reverse=True)

print("Matriz C: ")
print(C)
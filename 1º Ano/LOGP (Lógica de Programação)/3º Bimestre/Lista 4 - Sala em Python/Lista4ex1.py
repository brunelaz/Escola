A = []
B = []

for i in range(5):
    valor = int(input(f"Digite A[{i + 1}]: "))
    A.append(valor)

for i in range(5):
    B.append(A[i] * 3)

print("Matriz B: ")
print(B)
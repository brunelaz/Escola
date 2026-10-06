import math
A = []
B = []

for i in range(6):
    valor = int(input(f"Digite A[{i+1}]: "))
    A.append(valor)

for i in range(6):
    B.append(math.factorial(A[i]))

print("Matriz B: ")
print(B)
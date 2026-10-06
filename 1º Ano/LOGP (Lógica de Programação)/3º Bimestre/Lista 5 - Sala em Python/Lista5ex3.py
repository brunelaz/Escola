import math
A = []
B = []

for i in range(15):
    valor = int(input(f"Digite A[{i+1}]: "))
    A.append(valor)

for i in range(15):
    B.append(math.factorial(A[i]))

B.sort()


print("Matriz B: ")
print(B)
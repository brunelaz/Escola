vetor = []

for i in range(12):
    valor = int(input(f"Digite o {i+1}º número: "))
    vetor.append(valor)

vetor.sort(reverse=True)

print("Elementos em ordem decrescente: ")
print (vetor)
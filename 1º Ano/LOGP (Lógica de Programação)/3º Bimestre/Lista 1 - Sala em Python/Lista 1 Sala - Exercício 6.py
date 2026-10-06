valor = float(input("Digite o valor: "))
tempo = float(input("Digite o tempo: "))
taxa = float(input("Digite o taxa: "))

prestacao = valor + (valor * (taxa/100) * tempo)
print("A prestação é: ", prestacao)
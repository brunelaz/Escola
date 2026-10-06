tempo = float(input("Digite o tempo gasto na viagem (em horas): "))
velocidade_media = float(input("Digite a velocidade média da viagem (em km/h): "))

distancia = tempo * velocidade_media
litros_usados = distancia / 12

print("Velocidade Media: ", velocidade_media)
print("Tempo gasto na viagem:", tempo)
print("Distancia percorrida:", distancia)
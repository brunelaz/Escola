def primo(numero):
    if numero < 2:
        return False
    for i in range(2, numero):
        if numero % i == 0:
            return False
    return True
n = int(input("Digite um numero: "))
print(primo(n))
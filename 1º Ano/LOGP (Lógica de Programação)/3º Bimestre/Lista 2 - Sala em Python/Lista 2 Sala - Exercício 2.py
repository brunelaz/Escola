nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))
media = (nota1+nota2)/2
if media>=6:
    print("O aluno foi aprovado!\nA média dele é: ", media)
else:
    exame = float(input("Digite a nota do exame: "))
    medianova = (exame + media)/2
    if medianova>=5:
        print("O aluno foi aprovado em exame!\n A média dele é: ", medianova)
    else:
        print("O aluno foi reprovado! A média dele é: ", medianova)
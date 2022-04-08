# Feito por Nícolas Henriques
# https://github.com/NicolasHenriques 
# Feito em 08/04/2022

print('--Verificação Número Par ou Ímpar--')
n = int(input('Entre com um número inteiro: '))

print(str(n) + ' é um número par' if divmod(n, 2)[1] == 0 else str(n) + ' é um número impar')
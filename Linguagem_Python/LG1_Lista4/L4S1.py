# Feito por Nícolas Henriques
# https://github.com/NicolasHenriques 
# Feito em 08/04/2022

print('--Leitura array e multiplicação dos elementos--')

a = []
for i in range(0, 5):
    x = int(input('Entre com o ' + str(i+1) + 'o elemento do array: '))
    a.append(x)

for e in a:
    print(e, 'x 3 =', e * 3)
# Feito por Nícolas Henriques
# https://github.com/NicolasHenriques 
# Feito em 08/04/2022

print('--Azulejando Paredes--')
ap = float(input('Entre com a altura da parede: '))
lp = float(input('Entre com a largura da parede: '))
aa = float(input('Entre com a altura do azulejo: '))
ap = float(input('Entre com a largura do azulejo: '))

ta = (ap * lp) / (aa * ap)

print('O total de azulejos necessários serão: ', ta)
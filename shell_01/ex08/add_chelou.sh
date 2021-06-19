#!/bin/bash

#export FT_NBR1=$'\\\'\?"\\"'\'\\
#export FT_NBR2=rcrdmddd

# Fonte https://code.tutsplus.com/articles/number-systems-an-introduction-to-binary-hexadecimal-and-more--active-10848

echo $FT_NBR1 + $FT_NBR2 \ # concatenar o valor das duas variáveis
| sed "s/'/0/g" \ 	# Substituir ' por 0
| sed 's/\\/1/g' \	# Substituir \ por 1
| sed 's/"/2/g' \	# Substituir " por 2
| sed 's/?/3/g' \	# Substituir ? por 3
| sed 's/!/4/g' \	# Substituir ! por 4
| tr 'mrdoc' '01234' \	# Transforma mrdoc em 01234	
| xargs echo 'obase=13; ibase=5;' \	# Builda/Transforma base=13 em base5
| bc \	# Realiza a precisão do calculo de conversão 
| tr '0123456789ABC' 'gtaio luSnemf'	# Transforma os caracteres baseado na
										# Palavra chave
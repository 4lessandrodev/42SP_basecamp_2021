#!/bin/bash
cp ./ex00/main.c ../../avaliacao/ex00/main.c
cp ./ex01/main.c ../../avaliacao/ex01/main.c
cp ./ex02/main.c ../../avaliacao/ex02/main.c
cp ./ex03/main.c ../../avaliacao/ex03/main.c
cp ./ex04/main.c ../../avaliacao/ex04/main.c
cp ./ex05/main.c ../../avaliacao/ex05/main.c
cp ./ex06/main.c ../../avaliacao/ex06/main.c
cp ./ex07/main.c ../../avaliacao/ex07/main.c
cp ./ex08/main.c ../../avaliacao/ex08/main.c

cd ../../avaliacao/ex00 && gcc -Wall -Werror -Wextra *.c
cd ../ex01 && gcc -Wall -Werror -Wextra *.c
cd ../ex02 && gcc -Wall -Werror -Wextra *.c
cd ../ex03 && gcc -Wall -Werror -Wextra *.c
cd ../ex04 && gcc -Wall -Werror -Wextra *.c
cd ../ex05 && gcc -Wall -Werror -Wextra *.c
cd ../ex06 && gcc -Wall -Werror -Wextra *.c
cd ../ex07 && gcc -Wall -Werror -Wextra *.c
cd ../ex08 && gcc -Wall -Werror -Wextra *.c
# Ejecuta el comando cuando se modifiquen main.o o imprime.o,
# creandose el archivo ejecutable mensaje
funciones: main.o imprime.o suma.o
	gcc main.o imprime.o suma.o -o funciones

# Ejecuta el comando cuando se modifiquen main.c o dependencias .h,
# creandose el archivo main.o
# main.o: main.c dependencias.h
main.o: main.c definiciones.h
	gcc -c main.c

# Ejecuta el comando cuando se modifique imprime.c, creandose el
# archivo imprime.o
imprime.o: imprime.c
	gcc -c imprime.c

# Ejecuta el comando cuando se modifique suma.c, creandose el
# archivo suma.o
suma.o: suma.c
	gcc -c suma.c
	
# Elimina los archivos objeto , asi como el ejecutable
clean:
	rm -f *.o funciones
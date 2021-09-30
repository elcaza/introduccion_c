# Ejecuta el comando cuando se modifiquen main.o o imprime.o,
# creandose el archivo ejecutable mensaje
preprocesador: main.o 
	gcc main.o -o preprocesador

# Ejecuta el comando cuando se modifiquen main.c o dependencias .h,
# creandose el archivo main.o
# main.o: main.c dependencias.h
preprocesador.o: main.c 
	gcc -c main.c

# Elimina los archivos objeto , asi como el ejecutable
clean:
	rm -f *.o preprocesador
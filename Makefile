all: servidor_multiproceso cliente

servidor_multiproceso: servidor_multiproceso.c 
	gcc -Wall -g $^ -o $@

cliente: cliente.c 
	gcc -Wall $^ -o $@

clean:
	rm -rf cliente servidor_multiproceso

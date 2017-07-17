all: server client

servidor: server.c 
	gcc -Wall -g $^ -o $@

cliente: client.c 
	gcc -Wall $^ -o $@

clean:
	rm -rf client server

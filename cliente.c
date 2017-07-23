#include<stdio.h> //printf
#include<string.h>    //strlen
#include<sys/socket.h>    //socket
#include<arpa/inet.h> //inet_addr


int main( int argc, char *argv[]) { 


	int sd = socket(AF_INET , SOCK_STREAM , 0);
	int puerto = atoi(argv[2]);


	struct sockaddr_in server;

	direccion_cliente.sin_family = AF_INET;	
	direccion_cliente.sin_port = htons(puerto);
	direccion_cliente.sin_addr.s_addr = inet_addr(argv[1]) ;

	connect(sd, (struct sockaddr *)&server , sizeof(server));



}

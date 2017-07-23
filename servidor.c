#include <stdio.h>
#include <sys/socket.h>

int main( int argc, char *argv[]){
	if(argc == 1){
		printf("Uso: ./servidor <numero de puerto>\n");
		exit(-1);
	}

	if(argc != 2){
		printf( "por favor especificar un numero de puerto\n");
	}
	int puerto = atoi(argv[1]);

	int sd = socket(AF_INET , SOCK_STREAM , 0);

	struct sockaddr_in server , client;
	server.sin_family = AF_INET;
	server.sin_addr.s_addr = inet_addr("127.0.0.1") ;
	server.sin_port = htons(puerto);
	
	bind(sd,(struct sockaddr *)&server , sizeof(server))

	listen(socket_desc , 10);

	c = sizeof(struct sockaddr_in);
     
	newsd = accept(sd, (struct sockaddr *)&client, (socklen_t*)&c);
	char *ruta = malloc(1024);
	void *file = malloc(1024);
	while( (read_size = recv(newsd, client_message , 2000 , 0)) > 0 ){
}

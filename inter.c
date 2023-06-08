#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>

int main(int argc, char *argv[]) {
    char *hostname = "www.ejemplo.com";
    char *path = "/index.html";
    struct hostent *server;
    struct sockaddr_in server_addr;
    int sockfd, bytes, total_bytes = 0;
    char buffer[1024];

    // Resuelve la dirección IP del servidor
    server = gethostbyname(hostname);
    if (server == NULL) {
        fprintf(stderr, "Error: no se pudo resolver el nombre de host\n");
        exit(1);
    }

    // Crea un socket para conectarse al servidor
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        fprintf(stderr, "Error: no se pudo crear el socket\n");
        exit(1);
    }

    // Establece la dirección del servidor y el puerto
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(80);
    memcpy(&server_addr.sin_addr.s_addr, server->h_addr_list[0], server->h_length);

    // Conecta el socket al servidor
    if (connect(sockfd, (struct sockaddr *) &server_addr, sizeof(server_addr)) < 0) {
        fprintf(stderr, "Error: no se pudo conectar al servidor\n");
        exit(1);
    }

    // Envía una solicitud HTTP GET para descargar la página web
    sprintf(buffer, "GET %s HTTP/1.0\r\nHost: %s\r\n\r\n", path, hostname);
    if (send(sockfd, buffer, strlen(buffer), 0) < 0) {
        fprintf(stderr, "Error: no se pudo enviar la solicitud HTTP\n");
        exit(1);
    }

    // Descarga y muestra el contenido de la página web
    while ((bytes = recv(sockfd, buffer, sizeof(buffer), 0)) > 0) {
        total_bytes += bytes;
        fwrite(buffer, 1, bytes, stdout);
    }
    printf("\nTotal de bytes descargados: %d\n", total_bytes);

    // Cierra el socket

    close(sockfd);

    return 0;
}

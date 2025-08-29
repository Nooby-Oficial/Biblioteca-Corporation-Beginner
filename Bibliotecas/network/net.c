#include "net.h"

// Implementação placeholder
int net_init() { return 0; }
int net_connect(const char* host, int port) { return -1; }
int net_send(int socket, const void* data, int size) { return -1; }
int net_recv(int socket, void* buffer, int size) { return -1; }
void net_close(int socket) {}

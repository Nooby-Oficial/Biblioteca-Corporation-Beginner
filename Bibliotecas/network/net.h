#ifndef NET_H
#define NET_H

// Interface simples para rede (placeholder)

int net_init();
int net_connect(const char* host, int port);
int net_send(int socket, const void* data, int size);
int net_recv(int socket, void* buffer, int size);
void net_close(int socket);

#endif // NET_H

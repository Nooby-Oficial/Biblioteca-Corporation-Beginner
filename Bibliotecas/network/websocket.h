#ifndef WEBSOCKET_H
#define WEBSOCKET_H

// Funções para WebSocket
int ws_connect(const char* url);
int ws_send(int ws_id, const void* data, int size);
int ws_recv(int ws_id, void* buffer, int size);
void ws_close(int ws_id);

#endif // WEBSOCKET_H

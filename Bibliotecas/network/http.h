#ifndef HTTP_H
#define HTTP_H

// Funções para requisições HTTP
int http_get(const char* url, char* response, int maxlen);
int http_post(const char* url, const char* data, char* response, int maxlen);

#endif // HTTP_H

#ifndef JSON_H
#define JSON_H

// Placeholder para funções de serialização JSON

typedef struct Json Json;

Json* json_parse(const char* text);
char* json_stringify(const Json* json);
void json_free(Json* json);

#endif // JSON_H

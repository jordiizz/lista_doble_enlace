
typedef struct LISTA_DE
{
    int len;
    struct nodo* first;
    struct nodo* last;
    int size_d;
}LISTA_DE;

typedef struct nodo
{
    struct nodo* next;
    struct nodo* previous;
    void* data;
}NODO;

LISTA_DE* lista_de(int);

int list_len(LISTA_DE*);

void* list_read(LISTA_DE*,int);
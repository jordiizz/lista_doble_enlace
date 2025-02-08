
#include <stdio.h>
#include <string.h>
#include "./lista_doble_enlace.h"

LISTA_DE* lista_de(int size_d){
	if(size_d > 0){
		LISTA_DE* list = (LISTA_DE*) malloc(sizeof(LISTA_DE));
		if(list != NULL){
			list -> size_d = size_d;
			list -> first = NULL;
			list -> last = NULL;
			list -> len = 0;
		}
		return NULL;
	}
	return NULL;
}

void push_list(LISTA_DE* list,void* data){

	if(data != NULL && list != NULL){
		NODO* nodo = (NODO*)malloc(sizeof(NODO));
		nodo -> data = malloc(list -> size_d);
		if(list -> first == NULL && list -> len == 0){
			list -> first = nodo;
			list -> last = nodo;
			memcpy(data, nodo -> data, list -> size_d);
			list -> len = 1;
			nodo -> next = NULL;
			nodo -> previous = NULL;
			free(data);
			return;
		} 
		memcpy(data, nodo -> data, list -> size_d);
		nodo -> previous = list -> last;
		((list) -> last) -> next =  nodo;
		list -> last = nodo;
		list -> len++;
		free(data);
		return;
	}
	return;

}

int list_len(LISTA_DE* list){
	if(list !=NULL){
		return list -> len;
	}
	return -1;
}

void* list_read(LISTA_DE* list, int pos){
	if(list != NULL && pos >= 0){
		NODO* nodo_tmp = list -> first;
		for(int i = 0;i < pos; i++ ){
			nodo_tmp = nodo_tmp -> next;
		}
		return nodo_tmp -> data;
	}
	return NULL;
}



#include <CUnit/CUnit.h>
#include "../lista_doble_enlace.h"

void test_lista_crud(){
	int size_d = sizeof(int);
	LISTA_DE* list = lista_de(size_d);
	CU_ASSERT(list -> len = 0);
	CU_ASSERT(list != NULL);
	CU_ASSERT(list -> first == NULL);
	CU_ASSERT(list -> last == NULL);
}

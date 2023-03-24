// week5.c
#include <stdio.h>
#include "list_wk5.h"
#include "hashtable_wk5.h"

int main() {
	
	//list_test_func();
	
	
	int command = 1;
	HashTable table = create_hashtable(11);
	char buffer[100];

	while (command) {
		scanf_s("%d", &command);
		switch (command) {
		case 1:
			scanf_s("%s", buffer, 100);
			hash_insert(&table, buffer);

			break;
		case 2: // TODO: remove
			scanf_s("%s", buffer, 100);
			hash_remove(&table, buffer);
			break;
		case 3: // TODO: print
			hash_print(&table);
			break;
		}
		printf("\n");
	}
	// TODO: destroy
}
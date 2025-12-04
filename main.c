#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
	int number;
	char title[10];
};

void main(void) {
	struct Book *p;
	
	p = (struct Book*)malloc(2*sizeof(struct Book));
	
	if(p == NULL)
	{
		printf("ERROR\n");
		return;
	}
	
	p->number = 1;
	strcpy(p->title, "C programming");
	
	(p+1)->number = 2;
	strcpy((p+1)->title, "Electronics");
	
	free(p);
	return;
}
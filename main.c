#include "main.h"

int main(void)

{	
	int a = 25;
	char ss = 'A';
	int value, value1;
	char *name = "Aphrodis Kavuyo Garrix ten";

	/* using standard printf() functions*/ 
/*	value1 = printf("Correct!\n %c\n%s your checkers are 100%% green\n %f\n", ss, name, 2.09);
	printf("Total %d\n", value1);*//*
	puts("\n----Aka----");*/

	/* my ownprintf called ka_printf */

	value =	_printf("Correct!\n %c\n%s your checkers are 100%% green\n%d\n", ss, name, a);
	printf("%d\n", value);
/*	printf("Aphro you finally made it. %d\n", value1);*/
	/*write(1, name, 15);

	puts("");

	putchar(name[14]);
	puts("");*/
	return (0);
}

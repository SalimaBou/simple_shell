#include "userinput.h"
#include "executingphase.h"
#define MAX_LEN 1024
/**
 * main- the enrty point of the program that will display
 * the prompt and read it and execute it.
 * Return: 0
 */
int main(void)
{
	char userinp[MAX_LEN];

	while (1)
	{
		printf("#cifun$ ");
		fgets(userinp, MAX_LEN, stdin);
		userinp[strcspn(userinp, "\n")] = '\0';
		if (feof(stdin))
		{
			printf("\n");
			exit(0);
		}
		executing_phase(userinp);
	}
	return (0);
}

#include "userinput.h"

/**
 * puttheinput- is where users will prompt their input
 * @userinp: we have explain in the shellsifile
 * @ac: pointer of the pointer of the argumentc
 */
void puttheinput(char *userinp, char **ac)
{
	char *tk;
	int i = 1;

	tk = strtok(userinp, " ");
	ac[0] = tk;
	while (tk != NULL)
	{
		tk = strtok(NULL, " ");
		ac[i++] = tk;
	}
}

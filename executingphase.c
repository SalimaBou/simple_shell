#include "executingphase.h"
#include "userinput.h"
/**
 * executing_phase- the entry point of executing
 * @userinp: the user input itself
 */
void executing_phase(char *userinp)
{
	char *ac[128];
	pid_t pid;
	int status;

	puttheinput(userinp, ac);
	pid = fork();

	if (pid == -1)
	{
		perror("fork");
	}
	else if (pid == 0)
	{
		execve(ac[0], ac, NULL);
		perror("execve");
		exit(1);
	}
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
}

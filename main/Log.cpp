#include "MakeLog.h"

int main()
{
	int ret = 0;

	MakeLog *logMain = new MakeLog();

	ret = system("mkdir -m 777 -p /home/server/log");
	if(ret != 0) // log dir check
	{
		printf("ERROR : Could not make Directory \n");
	}
	else{ /* log file check */
		if (access( "/home/server/loglog.txt", F_OK) != -1) {
			system("rm -rf /home/server/log/log.txt");
		}
		else { /* nothing to do */
		}
	}

	logMain->Log("ERROR : LOG TEST \n");

	return 0;
}

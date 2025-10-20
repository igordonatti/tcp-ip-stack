#include "syshead.h"
#include "utils.h"

extern int debug;

int run_cmd(char* cmd, ...)
{
	va_list ap;
	char buf[CMDBUFLEN];
	va_start(ap, cmd);
	vsnprint(buf, CMDBUFLEN, cmd, ap);

	va_end(ap);

	if (debug) { 
		printf("EXEC: %s\n", buf);
	}

	return system(buf);
}


/* See LICENSE file for copyright and license details. */
#include <stdio.h>
#include <string.h>

#include "../util.h"

const char *
fcitx(const char *cmd)
{
	char *p;
	FILE *fp;

	if (!(fp = popen(cmd, "r"))) {
		warn("popen '%s':", cmd);
		return NULL;
	}
	p = fgets(buf, sizeof(buf) - 1, fp);
	if (pclose(fp) < 0) {
		warn("pclose '%s':", cmd);
		return NULL;
	}
	if (!p) {
		return NULL;
	}
	if ((p = strrchr(buf, '\n'))) {
		p[0] = '\0';
	}
	static char fcitxway1[20]="\uF30D";//F17C F30D
	static char fcitxway2[20]="\uF11C";
	if (buf[2]=='f')  //default
	{
		return fcitxway1;
	}
	else if(buf[2]=='r')
	{
		return fcitxway2;
	}

    return "";
}

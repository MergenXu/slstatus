const char *
// fcitx(const char *cmd)
// {
// 	char *p;
// 	FILE *fp;

// 	if (!(fp = popen(cmd, "r"))) {
// 		warn("popen '%s':", cmd);
// 		return NULL;
// 	}
// 	p = fgets(buf, sizeof(buf) - 1, fp);
// 	if (pclose(fp) < 0) {
// 		warn("pclose '%s':", cmd);
// 		return NULL;
// 	}
// 	if (!p) {
// 		return NULL;
// 	}
// 	if ((p = strrchr(buf, '\n'))) {
// 		p[0] = '\0';
// 	}

// 	return buf[0] ? buf : NULL;
// }
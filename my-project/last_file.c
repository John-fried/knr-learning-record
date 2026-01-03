#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <errno.h>
#include <dirent.h>
#include <time.h>

void display_mod_file(const char *dirpath, const char *filename)
{
	char fullpath[256];
	struct stat sb;

	snprintf(fullpath, sizeof(fullpath), "%s/%s", dirpath, filename);

	if (stat(fullpath, &sb) == -1) {
		fprintf(stderr, "failed to stat file %s: %s\n",
				fullpath, strerror(errno));
		return;
	}

	if (S_ISDIR(sb.st_mode))
		return;

	char *MOD_TIME = ctime(&sb.st_mtime);
	if (MOD_TIME[strlen(MOD_TIME) - 1] == '\n')
		MOD_TIME[strlen(MOD_TIME) - 1] = '\0';

	printf("\033[32m%-30s\033[2m | \033[34m%-30s\033[0m\n", fullpath,
			MOD_TIME);
}

int main(int argc, char *argv[])
{
	DIR *d;
	struct dirent *dir;
	const char *current_dir = (argc > 1) ? argv[1] : ".";

	d = opendir(current_dir);

	if (d == NULL) {
		perror("opendir");
		return 1;
	}

	while ((dir = readdir(d)) != NULL) {
		if (strcmp(dir->d_name, ".") != 0 &&
		    strcmp(dir->d_name, "..") != 0) {
			display_mod_file(current_dir, dir->d_name);
		}
	}

	closedir(d);

	return 0;
}

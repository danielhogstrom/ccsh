#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>

#define PROMPT "ccsh>"


int main(int argc, char *argv[])
{
	DIR *current;	
	struct dirent *directory;
	char *input;
	char dir_name[100];

	printf("%s ", PROMPT);
	
	scanf("%s", input);

	if(strcmp(input, "ls") == 0)
	{
		getcwd(dir_name, sizeof(dir_name));
		current = opendir(dir_name);
		while(directory = readdir(current))
		{
			if(directory->d_name[0] != '.')
		 		printf("%s\n", directory->d_name);
		}
	}
}


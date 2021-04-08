#include "holberton.h"

/**
 * search_dir_com - Validate the first argument to search in path directories
 * @arg: command argument to validate
 * @p_dir: PATH directories
 *
 * Return: Command argument with their respective directory
 */
char *search_dir_com(char *arg, char **p_dir)
{
	int i = 0;
	char *str = NULL;
	struct stat st;
	

	if (stat(arg, &st) == 0) /* validate if command have entire directory path */
	{	
		str = malloc(sizeof(char) * _strlen(arg) + 1);
		str = _strcpy(str, arg);
		return (str);
	}
	else /* validate if command correpond to some directory path */
	{	
		while(p_dir[i]) //<---------------  
		{	
			//printf("p_dir[%d]: %s\n", i, p_dir[i]);
			str = malloc(sizeof(char) * (_strlen(p_dir[i]) + _strlen(arg) + 2));
			str = strcat(str, "/usr/bin"); // <----------/usr/local p_dir[i]
			str = strcat(str, "/");      //            /usr/local/
			str = strcat(str, arg);      //            /usr/local/ls
		
			if (stat(str, &st) == 0)
			{
	//			cpy = _strcpy(cpy, str);
	//			free(str);
				return (str);
			}
			free(str);
			
			i++;
		}
		//p_dir[i] = '\0';
		return (arg);
	}
}
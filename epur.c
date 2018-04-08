/*
** EPITECH PROJECT, 2018
** epur
** File description:
** lemin
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char *epustr(char *str)
{
	int i = 0;
	int j = 0;

	for (; str[i] == ' '; i = i + 1);
	while (str[i] != '\0') {
		if (str[i] != '\t' && str[i] != ' ')
			str[j++] = str[i];
		if (str[i] == ' ' && str[i + 1] != ' ' &&
		    str[i + 1] != '\0')
			str[j++] = str[i];
		if (str[i] == '\t' && str[i + 1] != '\t' &&
		    str[i + 1] != '\0')
			str[j] = str[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}

#include "shell.h"
#include <fcntl.h>
#include <stdlib.h>

/**
  * read_textfile - reads a file and returns string of what it read
  * @filename: name of file to read
  * Return: string of what it read
  */

char *read_textfile(char *filename)
{
	char *buffer;
	int of;
	ssize_t lRead;

	if (!filename)
		return (NULL);
	/* allocate memory for content of file */
	buffer = do_mem(4096, NULL);
	/* open file */
	of = open(filename, O_RDONLY);
	if (of == -1)
	{
		do_mem(0, buffer);
		do_exit(2, _strcat("Can't open ", filename), 127);
	}

	/* read file up to the size of the buffer 4096 */
	lRead = read(of, buffer, 4096);
	if (lRead < 1)
	{
		do_mem(0, buffer);
		close(of);
		return (NULL);
	}

	/* check if close fails? */
	close(of);

	return (buffer);
}

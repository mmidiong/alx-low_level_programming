#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - A function that reads a text file and prints it to POSIX
 * standard output.
 * @filename: pointer to the file.
 * @letters: number of letters to read and print.
 *
 * Return: actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t wwrite, sz;
	char *buf; /* pointer to buffer to read data from */

	/* if filename is NULL */
	if (!filename)
		return (0);

	/* opening the file */
	file_descriptor = open(filename, O_RDONLY);
	/* If opening fails */
	if (file_descriptor == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	/* if no buffer */
	if (!buf)
		return (0);
	/* read the file */
	sz = read(file_descriptor, buf, letters);
	buf[sz] = '\0';

	/* write to stdout */
	wwrite = write(STDOUT_FILENO, buf, sz);
	/* close file */
	close(file_descriptor);
	/* free buf */
	free(buf);
	/* return number of letters */
	return (wwrite);
}

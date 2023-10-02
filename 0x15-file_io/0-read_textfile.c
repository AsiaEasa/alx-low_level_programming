#include <stdio.h>
#include "main.h"
/**
 * read_textfile - Read text file and print to STDOUT.
 *
 * @filename: The text file being read.
 * @letters: The number of letters to be read.
 *
 * Return: The actual number of bytes read and printed (w).
 *         0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{	ssize_t t, w;

	FILE *ptr = fopen(filename, "r");
	if (ptr == -1)
		return (0);
	ssize_t s = malloc(sizeof(char) * letters);
	while(fscanf(fptr,"%s",s)!=EOF)
		w = while(fprintf(STDOUT_FILENO,"%s",s)!=EOF)


			free(s);
	close(ptr);
	return (w);
}

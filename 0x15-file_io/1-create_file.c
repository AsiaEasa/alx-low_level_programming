#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * create_file - Create a file with specified name and write text content to it.
 *
 * @filename: The name of the file to be created.
 * @text_content: The text content to write to the file (can be NULL for an empty file).
 *
 * Return: 1 on success, -1 on failure (file can't be created, can't be written, write "fails", etc.).
 *         The created file has permissions: rw-------.
 *         If the file already exists, it will be truncated to contain the new content.
 *         If filename is NULL, return -1.
 *         If text_content is NULL, create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int ptr, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);

		ptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		w = write(ptr, text_content, len);

		if (ptr == -1 || w == -1)
			return (-1);
	}
	close(ptr);

	return (1);
}


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define SIZE 1024

/**
 * copy_file - Copy the content of one file to another.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or an error code (97, 98, 99, or 100) on failure.
 *
 * Description:
 * This program takes two command-line arguments: the source file (file_from)
 * and the destination file (file_to). It copies the content of the source
 * file to the destination file while handling various error conditions.
 *
 * Error Codes:
 *  - 97: Incorrect usage. Should be "cp file_from file_to".
 *  - 98: Failed to read from the source file.
 *  - 99: Failed to write to the destination file.
 *  - 100: Failed to close a file descriptor.
 */
void error(const char *Mes, int exit)
{
	dprintf(STDERR_FILENO, "Error: %s\n", Mes);
	exit(exit);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
		error("Usage: cp file_from file_to", 97);

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int ptr_from = open(file_from, O_RDONLY);

	if (ptr_from == -1)
		error("Can't read from file", 98);

	int ptr_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (ptr_to == -1)
	{
		close(ptr_from);
		error("Can't write to file", 99);
	}

	char buf[SIZE];
	ssize_t r, w;

	r = read(ptr_from, buf, SIZE);
	w = write(ptr_to, buf, r)
		if (w != r)
		{
			close(ptr_from);
			close(ptr_to);
			error("Can't write to file", 99);
		}

	if (r == -1)
	{
		close(ptr_from);
		close(ptr_to);
		error("Can't read from file", 98);
	}

	if (close(ptr_from) == -1 || close(ptr_to) == -1)
		error("Can't close ptr", 100);

	return (0);
}

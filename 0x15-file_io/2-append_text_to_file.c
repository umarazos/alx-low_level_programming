#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string of text to append at end of file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, o, w;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);
	if (text_content != NULL)
	{
		i = 0;
		while (text_content[i])
			i++;
		w = write(o, text_content, i);
		close(o);
		if (w != i)
			return (-1);
	}
	else
		close(o);
	return (1);
}

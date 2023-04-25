#include "main.h"

/**
  *write_with_buffer - use a local buffer of 1024 chars
  *		in oder to call write as little as possible
  *@fd: file descriptor
  *@msg: message to be written
  */

void write_with_buffer(int fd, const char *msg)
{
	char buffer[BUFFER_SIZE];
	int l = 0, n = 0, p = 0, c, bytes_written;

	if (*msg == '\0')
		return;

	while (msg[l] != '\0')
		l++;

	while (p < l)
	{
		c = (l - p) < BUFFER_SIZE ? (l - p) : BUFFER_SIZE;
		for (; n < c; n++)
			buffer[n] = msg[p + n];

		bytes_written = write(fd, buffer, c);
		if (bytes_written == -1)
			return;
		p += bytes_written;
	}
}

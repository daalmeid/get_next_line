# get_next_line - A way to get information from a file
This function allows to retrieve a line from a file using its file descriptor (fd). It is not the job of get_next_line
to open and close the fd, that is the responsability of the calling program. If called in a loop, the function will
read the whole file until it finds a null-terminator ('\0'). Caution: the line returned is **heap-allocated**, you
need to free it to avoid memory leaks.

To use it, just add the files to your project. I hope you find it helpful!

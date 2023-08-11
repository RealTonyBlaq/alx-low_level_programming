#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
int _strlen(char *str);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char **argv);
void cp(const char *file_from, const char *file_to);
int close_file(int file);
void close_files(int file1, int file2, char *file_to);

#endif /* #ifndef MAIN_H */

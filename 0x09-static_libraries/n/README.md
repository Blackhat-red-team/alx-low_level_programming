# 0x09-static_libraries Project #
General
What is a static library, how do you make one, and how do you use one?

basics of ranlib, ar, and nm

NOTE: Every file in this folder has been made executable.

The following problems are resolved by this project:

# Reference

What Exactly Is A "C" Library? What is It Effective For? (https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html).
- [Using "ar" and "ranlib" To Create A Static "C" Library]
(https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html).
Programming Using A "C" Library
(https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html).
- [Static and Dynamic linking: Difference between Dynamic and Static Libraries]
(https://www.youtube.com/watch?v=eW5he5uFBNM) (stop at 4:44) (stop at 4:44)

# Tasks


0.
[A library is not an extravagance, but rather one of life's needs]




(./libholberton.a): Building a static library with each of the aforementioned functions.


below.
- Features; "sh

	```sh
		int _putchar(char c);
		int _islower(int c);
		int _isalpha(int c);
		int _abs(int n);
		int _isupper(int c);
		int _isdigit(int c);
		int _strlen(char *s);
		void _puts(char *s);
		char *_strcpy(char *dest, char *src);
		int _atoi(char *s);
		char *_strcat(char *dest, char *src);
		char *_strncat(char *dest, char *src, int n);
		char *_strncpy(char *dest, char *src, int n);
		int _strcmp(char *s1, char *s2);
		char *_memset(char *s, char b, unsigned int n);
		char *_memcpy(char *dest, char *src, unsigned int n);
		char *_strchr(char *s, char c);
		unsigned int _strspn(char *s, char *accept);
		char *_strpbrk(char *s, char *accept);
		char *_strstr(char *haystack, char *needle);
		```
File [Holberton]" .h]
All the aforementioned functions developed from earlier projects are contained in (./holberton.h).
– The steps for making a static library.
-
To create our object files, or ".o" files, first compile all of the ".c" files.
'gcc -c *c'
- Using our object files, we then construct our static library.
"ar rc libholberton."
- After that, we verify that our static library was correctly constructed.
A.R.T. Libholberton
- We check to see if our object files were correctly connected.
libholberton.h, nm
- Build our static library's main code as follows to test it:
main.c gcc -std=gnu89
L. Holberton, "quote 1"
[What would we have without libraries?
We don't have a past or a future.
(./create static lib.sh):
Make a script that compiles all of the.c files in the current directory into a library called liball.a. 
Remember this when developing a static library: ###


gcc -c *.c transforms.c files into.o (object) files.

Arcs libmy.a *.o

Arc libmy.a *.o
By doing this, "Libmy.a" static library is created.

Ar-t libmy.a
Below is a list of every file in libmy.a.


- converted to random library using ranlib libmy.a


- If you wish to compile a static library for testing purposes after developing it:

- > main.c gcc -std=gnu89
-L -lmy -o
(new file name) 

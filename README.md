# Libft

My implementation of some of the functions that are in Libft, a standard C library.

## Using this Library

Start by getting your own copy of this repo:

```
Git clone https://github.com/elidlocke/libft.git
cd libft
```

This library contains a makefile, with the following options:

| Command | Usage |
| --- | --- |
| `make` | creates .o files for each function as well as the main library file, libft.a |
| `make libft.a` | same as make |
| `make clean` | removes the .o files used to create the library |
| `make clean` | removes the .o files used to create the library, as well as the libft.a library file |
| `make re` | removes all compilation files and remakes them |

If you go ahead and run:

```
make
make clean
```

You should see a new libft.a file. Now you can use it anywhere by including the header in your .c file, like so:

```
include "libft.h"
```

don't forget to tell gcc what the path to your library is when you compile a file that is using it.  For example:

```
gcc some_c_file.c -L/path_to_library_file/ -l/ft/
```
Note that -L takes the path to your library and -l takes the set of characters that come after lib in your library name.

## Functions

###Part 1

_Functions that are directly included in libc_

| Function | Description |
| --- | --- |
| **ft\_memset()** | The ft\_memset() function writes len bytes of value c (converted to an unsigned char) to the string b. Returns it's first argument.|
| **ft\_bzero()** | The ft\_bzero() function writes n zeroed bytes to the string s.  If n is zero, ft\_bzero() does nothing.|
| **ft\_memcpy()** | The ft\_memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined. Returns the original value of dst.|
| **ft\_memccpy()** |The ft\_memccpy() function copies bytes from string src to string dst.  If the character c (as converted to an unsigned char) occurs in the string src, the copy stops and a pointer to the byte after the copy of c in the string dst is returned. Otherwise, n bytes are copied and a null pointer is returned.|
| **ft\_memmove()** | The ft\_memmove() function copies len bytes from strin src to dst. The two strings may overlap; the copy is always done in a non-destructive manner. Returns the original value of dst. |
| **ft\_memchr()** | The ft\_memchr() function locates the first occurence of c (converted to an unsigned char) in string s. Returns a pointer to the byte located, or NULL if no such byte exists within n bytes.) |
| **ft\_memcmp()** | The ft\_memcmp() function compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long. Returns 0 if the first two strings are identical, otherwise returns the difference between the first two bytes (treated as unsigned char values). Zero-length strings are always identical.|
| **ft\_strlen()** | The ft\_strlen() function computes and returns the length of the string s.|
| **ft\_strdup()** | The ft\_strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  The pointer may subsequently be used as an argument to the function free(3). If insufficient memory is available, NULL is returned and errno is set to ENOMEM.|
| **ft\_strcpy()** | The ft\_strcpy() function copies the string src to dst (including the terminating '\0' character.)|
| **ft\_strncpy()** |The ft\_strncpy() function copies at most len characters from src into dst.  If src is less than len characters long, the remainder of dst is filled with '\0' characters.|
| **ft\_strcat()** | The ft\_strcat() function appends a copy of the null-terminated string s2 to the end of the null-terminated string s1, then add a terminating '\0'. The string s1 must have sufficient space to hold the result.|
| **ft\_strncat()** | The ft\_strncat() function appends a copy of the null-terminated string s2 to the end of the null-terminated string s1. The ft\_strncat() function appends not more than n characters from s2, and then adds a terminating '\0'.|
| **ft\_strlcat()** | The ft\_strlcat() appends string src to the end of dst.  It will append at most maxlen - strlen(dst) - 1 characters.  It will then NUL-terminate, unless maxlen is 0 or the original dst string was longer than maxlen. maxlen should be the size of the destination string buffer dst plus the space for the nul-terminator. Returns the total length of the string it tried to create.|
| **ft\_strchr()** |The ft\_strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is '\0', the functions locate the terminating '\0'. Returns a pointer to the located character, or NULL if the character does not appear in the string.|
| **ft\_strrchr()** | The ft\_strrchr() function locates the last occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is '\0', the functions locate the terminating '\0'. Returns a pointer to the located character, or NULL if the character does not appear in the string.|
| **ft\_strstr()** | The ft\_strstr() function locates the first occurrence of the null-terminated string needle in the null-terminated string haystack.|
| **ft\_strnstr()** | The ft\_strnstr() function locates the first occurrence of the null-terminated string needle in the null-terminated string haystack, where not more than len characters are searched. Characters after the '\0' are not searched. If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first character of the first occurrence of needle is returned.|
| **ft\_strcmp()** | The ft\_strcmp() function lexicographically compares the null-terminated strings s1 and s2. Returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than,equal to, or less than the string s2.  The comparison is done using unsigned characters, so that '\200' is greater than '\0'.|
| **ft\_strncmp()** | The ft\_strncmp() function lexicographically compares the null-terminated strings s1 and s2. Returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2.  Compares not more than n characters. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.|
| **ft\_atoi()** | ft\_atoi() converts the initial portion of the string pointed to by str to int representation and returns the int.|
| **ft\_isalpha()** |The ft\_isalpha() function tests for any character for which isupper(3) or islower(3) is true.  The value of the argument must be representable as an unsigned char or the value of EOF.|
| **ft\_isdigit()** | The ft\_isdigit() function tests for a decimal digit character.  Regardless of locale, this includes the following characters only: '0' - '9'.|
| **ft\_isalnum()** | The ft\_isalnum() function tests for any character for which ft\_isalpha(3) or ft\_isdigit(3) is true.  The value of the argument must be representable as an unsigned char or the value of EOF.|
| **ft\_isascii()** | The ft\_isascii() function tests for an ASCII character, which is any character between 0 and decimal  127 inclusive.|
| **ft\_isprint()** | The ft\_isprint() function tests for any printing character, including space (' ').  The value of the argument must be representable as an unsigned char or the value of EOF.|
| **ft\_toupper()** | The ft\_toupper() function converts a lower-case letter to the corresponding upper-case letter.  The argument must be representable as an unsigned char or the value of EOF. If the argument is a lower-case letter, the ft\_toupper() function returns the corresponding upper-case letter if there is one; otherwise, the argument is returned unchanged.|
| **ft\_tolower()** | The ft\_tolower() function converts an upper-case letter to the correspond-ing lower-case letter.  The argument must be representable as an unsigned char or the value of EOF.|

###Part 2

_Additional functions that are not in libc, but are required by the assignment._

| Function | Description |
| --- | --- |
| **ft\_memalloc()** | Allocates with malloc(3) and returns a fresh memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.|
| **ft\_memdel()** | The ft\_memdel() function takes the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL.|
| **ft\_strnew()** | The function ft\_strnew() allocates with malloc(3) and returns a fresh string ending with '\0'. Each character of the string is initialized at '\0'. If the allocation fails, the function returns NULL.|
| **ft\_strdel()** | The ft\_strdel() function takes as a parameter the address of a string that needs to be freed with free(3), then sets its pointer to NULL.|
| **ft\_strclr()** | The ft\_strclr() function sets every character of the string s to '\0'.|
| **ft\_striter()** | The ft\_striter() function applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary.|
| **ft\_striteri()** | The ft\_striteri() function applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary.|
| **ft\_strmap()** | The function ft\_strmap() applies the function f to each character of the string given as an argument to create a "fresh" new string (with malloc(3)) resulting from the successive applications of f.|
| **ft\_strequ()** | The ft\_strequ() function does a lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise.|
| **ft\_strnequ()** | The ft\_strnequ() function does a lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise.|
| **ft\_strsub()** | The ft\_strsub() function allocates with malloc(3) and returns a "fresh" substring from string given as an argument. The substring begins at index start and is of size len. If start and len aren't referring to a valid substring, the behavior is undefined. If the allocation fails, the function returns NULL.|
| **ft\_strjoin()** | The ft\_strjoin() function allocates (with malloc(3)) and returns a "fresh" string that is the concatenation of s1 and s2, ending with '\0'. If the allocation fails, the function returns NULL.|
| **ft\_strtrim()** | The ft\_strtrim() function allocates with malloc(3) and returns a copy of the string given as argument without whitespaces at the beginning or at the end of the string. ' ', '\n' and '\t' are considered whitespace characters. If s has no whitespaces at the beginning or the end, the function returns a copy of s. If the allocation fails the function returns NULL.|
| **ft\_strsplit()** | The ft\_strsplit() function allocates with malloc(3) and returns an array of fresh strings (all ending with '\0' including the array itself) obtained by splitting s using the character c as a delimiter. If the allocation fails, the function returns NULL.|
| **ft\_itoa()** | The ft\_itoa() fuction allocates (with malloc(3)) and returns a "fresh" string ending with '\0' representing the integer n given as argument. Negative numbers must be supported. If the allocation fails, the function returns NULL.|
| **ft\_putchar()** | The ft\_putchar() function outputs the character c to the standard output.|
| **ft\_putstr()** | The ft\_putstr() function outputs a string to the standard output.|
| **ft\_putendl()** | The ft\_putendl() function outputs a string to the standard output, followed by a newline.|
| **ft\_putnbr()** | The ft\_putnbr() function outputs the integer n to the standard output|
| **ft\_putchar_fd()** | The ft\_putchar\_fd() function outputs the character c to the specified file descriptor. A file descriptor of 0, 1, or 2, refers to  the standard input, standard output, or standard error, respectively.|
| **ft\_putstr_fd()** | The ft\_putstr\_fd() function outputs a string to the output specified by the file descriptor. A file descriptor of 0, 1, or 2, refers to the standard input, standard output, or standard error, respectively.|
| **ft\_putendl_fd()** | The ft\_putendl\_fd() function outputs a string to the output specified by the file descriptor, followed by a newline. The file descriptor  can be  0, 1, or 2, to refer to standard input, standard output, or standard error, respectively.|
| **ft\_putnbr_fd()** | The ft\_putnbr\_fd() function outputs a number to the output specified by the file descriptor. A file descriptor of 0, 1, or 2, refers to the standard input, standard output, or standard error, respectively.|


###Part 3

_Optional: creation and manipulation of linked lists_

| Function | Description |
| --- | --- |
| **ft\_lstnew()** | The function ft\_lstnew() allocates (with malloc(3)) and returns a “fresh” link. The variables content and content\_size of the new link are initialized by copy of the parameters of the function. If the parameter content is nul, the variable content is initialized to NULL and the variable content\_size is initialized to 0 even if the parameter content\_size isn’t. The variable next is initialized to NULL. If the allocation fails, the function returns NULL.|
| **ft\_lstdelone()** | The function ft\_lstdelone() takes as a parameter a link's pointer address and frees the memory of the link's content using the function del given as a parameter, then frees the link's memory using free(3). The memory of next must not be freed under any circumstance. Finally, the pointer to the link that was just freed must be set to NULL (quite similar to the function ft\_memdel)|
| **ft\_lstdel()** | The function ft\_lstdel() takes as a parameter the address of a pointer to a link and frees the memory of that link, and every successor of that link using the functions del and free. The last pointer is set to NULL.|
| **ft\_lstadd()** | The ft\_lstadd() function adds the element new at the beginning of the list alst.|
| **ft\_lstiter()** | The ft\_lstiter() function iterates through a list and applies the function f to each link in the list.|

####Part 4
_Bonus: functions that I find useful that were not included in the assignment._

| Function | Description |
| --- | --- |
| **ft\_strrev()** | The function ft\_strrev() takes a string and the length of that string, and  reverses the string in place. Returns the reversed string.|
| **ft\_iswhitespace()** | The function ft\_iswhitespace() checks whether or not a character is considered a whitespace character, aka ' ', '\t', '\n', '\f', '\v' or '\r'|
| **ft\_makeabs()** | The ft\_makeabs() function takes an integer and changes it to it's absolute value, while changing the sign variable that gets passed in (1 for positive or -1 for negative).|
| **ft\_countwords()** | The function ft\_countwords() takes a string and a delimiter and counts the number of words between the delimiters.|
| **ft\_getword()** | The ft\_getword() function takes a string and a delimiter and returns a string with the letters between the start point of the string and the next delimiter.|
| **ft\_gotonextword()** | The ft\_gotonextword() function takes a pointer to a string and moves the pointer forward to the next point that is past the next delimiter. if there is no more words in the string, the pointer is moved to the end of the string.|
| **ft\_printlst()** | The function ft\_printlst() takes a linked list and prints the parameter content from each link in the list, assuming that the content is a string. Each parameter is followed by a newline.|

## Disclaimer

This is a project that was done for learning purposes only. This is not meant to be used as a replacement for the [GNU C Library](https://www.gnu.org/software/libc/).


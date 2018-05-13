# Libft

An implementation of some of the standard functions in C. Done as an educational project at [42USA](https://www.42.us.org/).

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
| `make fclean` | removes the .o files used to create the library, as well as the libft.a library file |
| `make re` | removes all compilation files and remakes them |

If you go ahead and run:

```
make && make clean
```

You should see a new libft.a file. Now you can use it anywhere by including the header in your .c file, like so:

```
include "libft.h"
```

Don't forget to tell gcc what the path to your library is when you compile a file that is using it.  For example:

```
gcc some_c_file.c -L<specify_path_to_library_file> -lft
```
Note that -L takes the path to your library and -l takes the set of characters that come after lib in your library name.

## Functions

### Part 1

_Functions that are directly included in libc_

| Function | Description |
| --- | --- |
| [**ft\_memset()**](https://github.com/elidlocke/libft/blob/master/src/ft_memset.c) | The ft\_memset() function writes len bytes of value c (converted to an unsigned char) to the string b. Returns it's first argument.|
| [**ft\_bzero()**](https://github.com/elidlocke/libft/blob/master/src/ft_bzero.c) | The ft\_bzero() function writes n zeroed bytes to the string s.  If n is zero, ft\_bzero() does nothing.|
| [**ft\_memcpy()**](https://github.com/elidlocke/libft/blob/master/src/ft_memcpy.c) | The ft\_memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined. Returns the original value of dst.|
| [**ft\_memccpy()**](https://github.com/elidlocke/libft/blob/master/src/ft_memccpy.c) |The ft\_memccpy() function copies bytes from string src to string dst.  If the character c (as converted to an unsigned char) occurs in the string src, the copy stops and a pointer to the byte after the copy of c in the string dst is returned. Otherwise, n bytes are copied and a null pointer is returned.|
| [**ft\_memmove()**](https://github.com/elidlocke/libft/blob/master/src/ft_memmove.c) | The ft\_memmove() function copies len bytes from strin src to dst. The two strings may overlap; the copy is always done in a non-destructive manner. Returns the original value of dst. |
| [**ft\_memchr()**](https://github.com/elidlocke/libft/blob/master/src/ft_memchr.c) | The ft\_memchr() function locates the first occurence of c (converted to an unsigned char) in string s. Returns a pointer to the byte located, or NULL if no such byte exists within n bytes.) |
| [**ft\_memcmp()**](https://github.com/elidlocke/libft/blob/master/src/ft_memcmp.c) | The ft\_memcmp() function compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long. Returns 0 if the first two strings are identical, otherwise returns the difference between the first two bytes (treated as unsigned char values). Zero-length strings are always identical.|
| [**ft\_strlen()**](https://github.com/elidlocke/libft/blob/master/src/ft_strlen.c) | The ft\_strlen() function computes and returns the length of the string s.|
| [**ft\_strdup()**](https://github.com/elidlocke/libft/blob/master/src/ft_strdup.c) | The ft\_strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  The pointer may subsequently be used as an argument to the function free(3). If insufficient memory is available, NULL is returned.|
| [**ft\_strndup()**](https://github.com/elidlocke/libft/blob/master/src/ft_strndup.c) | The ft\_strdup() function allocates sufficient memory to opy n bytes of the string s1, does the copy, and returns a pointer to it. s1 will always be NUL terminated. The pointer may subsequently be used as an argument to the function free(3). If insufficient memory is available, NULL is returned.|
| [**ft\_strcpy()**](https://github.com/elidlocke/libft/blob/master/src/ft_strcpy.c) | The ft\_strcpy() function copies the string src to dst (including the terminating '\0' character.)|
| [**ft\_strncpy()**](https://github.com/elidlocke/libft/blob/master/src/ft_strncpy.c) |The ft\_strncpy() function copies at most len characters from src into dst.  If src is less than len characters long, the remainder of dst is filled with '\0' characters.|
| [**ft\_strcat()**](https://github.com/elidlocke/libft/blob/master/src/ft_strcat.c) | The ft\_strcat() function appends a copy of the null-terminated string s2 to the end of the null-terminated string s1, then add a terminating '\0'. The string s1 must have sufficient space to hold the result.|
| [**ft\_strncat()**](https://github.com/elidlocke/libft/blob/master/src/ft_strncat.c) | The ft\_strncat() function appends a copy of the null-terminated string s2 to the end of the null-terminated string s1. The ft\_strncat() function appends not more than n characters from s2, and then adds a terminating '\0'.|
| [**ft\_strlcat()**](https://github.com/elidlocke/libft/blob/master/src/ft_strlcat.c) | The ft\_strlcat() appends string src to the end of dst.  It will append at most maxlen - strlen(dst) - 1 characters.  It will then NUL-terminate, unless maxlen is 0 or the original dst string was longer than maxlen. maxlen should be the size of the destination string buffer dst plus the space for the nul-terminator. Returns the total length of the string it tried to create.|
| [**ft\_strchr()**](https://github.com/elidlocke/libft/blob/master/src/ft_strchr.c) |The ft\_strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is '\0', the functions locate the terminating '\0'. Returns a pointer to the located character, or NULL if the character does not appear in the string.|
| [**ft\_strrchr()**](https://github.com/elidlocke/libft/blob/master/src/ft_strrchr.c) | The ft\_strrchr() function locates the last occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is '\0', the functions locate the terminating '\0'. Returns a pointer to the located character, or NULL if the character does not appear in the string.|
| [**ft\_strstr()**](https://github.com/elidlocke/libft/blob/master/src/ft_strstr.c) | The ft\_strstr() function locates the first occurrence of the null-terminated string needle in the null-terminated string haystack.|
| [**ft\_strnstr()**](https://github.com/elidlocke/libft/blob/master/src/ft_strnstr.c) | The ft\_strnstr() function locates the first occurrence of the null-terminated string needle in the null-terminated string haystack, where not more than len characters are searched. Characters after the '\0' are not searched. If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first character of the first occurrence of needle is returned.|
| [**ft\_strcmp()**](https://github.com/elidlocke/libft/blob/master/src/ft_strcmp.c) | The ft\_strcmp() function lexicographically compares the null-terminated strings s1 and s2. Returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than,equal to, or less than the string s2.  The comparison is done using unsigned characters, so that '\200' is greater than '\0'.|
| [**ft\_strncmp()**](https://github.com/elidlocke/libft/blob/master/src/ft_strcmp.c) | The ft\_strncmp() function lexicographically compares the null-terminated strings s1 and s2. Returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2.  Compares not more than n characters. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.|
| [**ft\_atoi()**](https://github.com/elidlocke/libft/blob/master/src/ft_atoi.c) | ft\_atoi() converts the initial portion of the string pointed to by str to int representation and returns the int.|
| [**ft\_isalpha()**](https://github.com/elidlocke/libft/blob/master/src/ft_isalpha.c) |The ft\_isalpha() function tests for any character for which isupper(3) or islower(3) is true.  The value of the argument must be representable as an unsigned char or the value of EOF.|
| [**ft\_isdigit()**](https://github.com/elidlocke/libft/blob/master/src/ft_isdigit.c) | The ft\_isdigit() function tests for a decimal digit character.  Regardless of locale, this includes the following characters only: '0' - '9'.|
| [**ft\_isalnum()**](https://github.com/elidlocke/libft/blob/master/src/ft_isalnum.c) | The ft\_isalnum() function tests for any character for which ft\_isalpha(3) or ft\_isdigit(3) is true.  The value of the argument must be representable as an unsigned char or the value of EOF.|
| [**ft\_isascii()**](https://github.com/elidlocke/libft/blob/master/src/ft_ascii.c) | The ft\_isascii() function tests for an ASCII character, which is any character between 0 and decimal  127 inclusive.|
| [**ft\_isprint()**](https://github.com/elidlocke/libft/blob/master/src/ft_isprint.c) | The ft\_isprint() function tests for any printing character, including space (' ').  The value of the argument must be representable as an unsigned char or the value of EOF.|
| [**ft\_toupper()**](https://github.com/elidlocke/libft/blob/master/src/ft_toupper.c) | The ft\_toupper() function converts a lower-case letter to the corresponding upper-case letter.  The argument must be representable as an unsigned char or the value of EOF. If the argument is a lower-case letter, the ft\_toupper() function returns the corresponding upper-case letter if there is one; otherwise, the argument is returned unchanged.|
| [**ft\_tolower()**](https://github.com/elidlocke/libft/blob/master/src/ft_tolower.c) | The ft\_tolower() function converts an upper-case letter to the correspond-ing lower-case letter.  The argument must be representable as an unsigned char or the value of EOF.|

### Part 2

_Additional functions that are not in libc, but are required by the assignment._

| Function | Description |
| --- | --- |
| [**ft\_memalloc()**](https://github.com/elidlocke/libft/blob/master/src/ft_memalloc.c) | Allocates with malloc(3) and returns a fresh memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.|
| [**ft\_memdel()**](https://github.com/elidlocke/libft/blob/master/src/ft_memdel.c) | The ft\_memdel() function takes the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL.|
| [**ft\_strnew()**](https://github.com/elidlocke/libft/blob/master/src/ft_strnew.c) | The function ft\_strnew() allocates with malloc(3) and returns a fresh string ending with '\0'. Each character of the string is initialized at '\0'. If the allocation fails, the function returns NULL.|
| [**ft\_strdel()**](https://github.com/elidlocke/libft/blob/master/src/ft_strdel.c) | The ft\_strdel() function takes as a parameter the address of a string that needs to be freed with free(3), then sets its pointer to NULL.|
| [**ft\_strclr()**](https://github.com/elidlocke/libft/blob/master/src/ft_strclr.c) | The ft\_strclr() function sets every character of the string s to '\0'.|
| [**ft\_striter()**](https://github.com/elidlocke/libft/blob/master/src/ft_striter.c) | The ft\_striter() function applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary.|
| [**ft\_striteri()**](https://github.com/elidlocke/libft/blob/master/src/ft_striteri.c) | The ft\_striteri() function applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary.|
| [**ft\_strmap()**](https://github.com/elidlocke/libft/blob/master/src/ft_strmap.c) | The function ft\_strmap() applies the function f to each character of the string given as an argument to create a "fresh" new string (with malloc(3)) resulting from the successive applications of f.|
| [**ft\_strequ()**](https://github.com/elidlocke/libft/blob/master/src/ft_strequ.c) | The ft\_strequ() function does a lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise.|
| [**ft\_strnequ()**](https://github.com/elidlocke/libft/blob/master/src/ft_strnequ.c) | The ft\_strnequ() function does a lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise.|
| [**ft\_strsub()**](https://github.com/elidlocke/libft/blob/master/src/ft_strsub.c) | The ft\_strsub() function allocates with malloc(3) and returns a "fresh" substring from string given as an argument. The substring begins at index start and is of size len. If start and len aren't referring to a valid substring, the behavior is undefined. If the allocation fails, the function returns NULL.|
| [**ft\_strjoin()**](https://github.com/elidlocke/libft/blob/master/src/ft_strjoin.c) | The ft\_strjoin() function allocates (with malloc(3)) and returns a "fresh" string that is the concatenation of s1 and s2, ending with '\0'. If the allocation fails, the function returns NULL.|
| [**ft\_strtrim()**](https://github.com/elidlocke/libft/blob/master/src/ft_strtrim.c) | The ft\_strtrim() function allocates with malloc(3) and returns a copy of the string given as argument without whitespaces at the beginning or at the end of the string. ' ', '\n' and '\t' are considered whitespace characters. If s has no whitespaces at the beginning or the end, the function returns a copy of s. If the allocation fails the function returns NULL.|
| [**ft\_strsplit()**](https://github.com/elidlocke/libft/blob/master/src/ft_strsplit.c) | The ft\_strsplit() function allocates with malloc(3) and returns an array of fresh strings (all ending with '\0' including the array itself) obtained by splitting s using the character c as a delimiter. If the allocation fails, the function returns NULL.|
| [**ft\_itoa()**](https://github.com/elidlocke/libft/blob/master/src/ft_itoa.c) | The ft\_itoa() fuction allocates (with malloc(3)) and returns a "fresh" string ending with '\0' representing the integer n given as argument. Negative numbers must be supported. If the allocation fails, the function returns NULL.|
| [**ft\_putchar()**](https://github.com/elidlocke/libft/blob/master/src/ft_putchar.c) | The ft\_putchar() function outputs the character c to the standard output.|
| [**ft\_putstr()**](https://github.com/elidlocke/libft/blob/master/src/ft_putstr.c) | The ft\_putstr() function outputs a string to the standard output.|
| [**ft\_putendl()**](https://github.com/elidlocke/libft/blob/master/src/ft_putendl.c) | The ft\_putendl() function outputs a string to the standard output, followed by a newline.|
| [**ft\_putnbr()**](https://github.com/elidlocke/libft/blob/master/src/ft_putnbr.c) | The ft\_putnbr() function outputs the integer n to the standard output|
| [**ft\_putchar\_fd()**](https://github.com/elidlocke/libft/blob/master/src/ft_putchar_fd.c) | The ft\_putchar\_fd() function outputs the character c to the specified file descriptor. A file descriptor of 0, 1, or 2, refers to  the standard input, standard output, or standard error, respectively.|
| [**ft\_putstr\_fd()**](https://github.com/elidlocke/libft/blob/master/src/ft_putstr_fd.c) | The ft\_putstr\_fd() function outputs a string to the output specified by the file descriptor. A file descriptor of 0, 1, or 2, refers to the standard input, standard output, or standard error, respectively.|
| [**ft\_putendl\_fd()**](https://github.com/elidlocke/libft/blob/master/src/ft_putendl_fd.c) | The ft\_putendl\_fd() function outputs a string to the output specified by the file descriptor, followed by a newline. The file descriptor  can be  0, 1, or 2, to refer to standard input, standard output, or standard error, respectively.|
| [**ft\_putnbr\_fd()**](https://github.com/elidlocke/libft/blob/master/src/ft_putnbr_fd.c) | The ft\_putnbr\_fd() function outputs a number to the output specified by the file descriptor. A file descriptor of 0, 1, or 2, refers to the standard input, standard output, or standard error, respectively.|


### Part 3

_Optional: creation and manipulation of linked lists_

| Function | Description |
| --- | --- |
| [**ft\_lstnew()**](https://github.com/elidlocke/libft/blob/master/src/ft_lstnew.c) | The function ft\_lstnew() allocates (with malloc(3)) and returns a “fresh” link. The variables content and content\_size of the new link are initialized by copy of the parameters of the function. If the parameter content is nul, the variable content is initialized to NULL and the variable content\_size is initialized to 0 even if the parameter content\_size isn’t. The variable next is initialized to NULL. If the allocation fails, the function returns NULL.|
| [**ft\_lstdelone()**](https://github.com/elidlocke/libft/blob/master/src/ft_lstdelone.c) | The function ft\_lstdelone() takes as a parameter a link's pointer address and frees the memory of the link's content using the function del given as a parameter, then frees the link's memory using free(3). The memory of next must not be freed under any circumstance. Finally, the pointer to the link that was just freed must be set to NULL (quite similar to the function ft\_memdel)|
| [**ft\_lstdel()**](https://github.com/elidlocke/libft/blob/master/src/ft_lstdel.c) | The function ft\_lstdel() takes as a parameter the address of a pointer to a link and frees the memory of that link, and every successor of that link using the functions del and free. The last pointer is set to NULL.|
| [**ft\_lstadd()**](https://github.com/elidlocke/libft/blob/master/src/ft_lstadd.c) | The ft\_lstadd() function adds the element new at the beginning of the list alst.|
| [**ft\_lstiter()**](https://github.com/elidlocke/libft/blob/master/src/ft_lstiter.c) | The ft\_lstiter() function iterates through a list and applies the function f to each link in the list.|
| [**ft\_lstmap()**](https://github.com/elidlocke/libft/blob/master/src/ft_lstmap.c) | The ft\_map() function iterates a list lst and applies the function f to each link to create a “fresh” list (using malloc(3)) resulting from the successive applications of f. If the allocation fails, the function returns NULL.|

#### Part 4
_Bonus: functions that I find useful that were not included in the assignment._

| Function | Description |
| --- | --- |
| [**ft\_strrev()**](https://github.com/elidlocke/libft/blob/master/src/ft_strrev.c) | The function ft\_strrev() takes a string and the length of that string, and  reverses the string in place. Returns the reversed string.|
| [**ft\_putstrarr()**](https://github.com/elidlocke/libft/blob/master/src/ft_putstrarr.c) | The function ft\_putstrarr() takes in an array of strings and prints each string, followed by a newline.|
| [**ft\_putstrarr\_fd()**](https://github.com/elidlocke/libft/blob/master/src/ft_putstrarr_fd.c) | The function ft\_putstrarr\_fd() takes in an array of strings and prints each string to the specified file descriptor, followed by a newline.|
| [**ft\_iswhitespace()**](https://github.com/elidlocke/libft/blob/master/src/ft_iswhitespace.c) | The function ft\_iswhitespace() checks whether or not a character is considered a whitespace character, aka ' ', '\t', '\n', '\f', '\v' or '\r'|
| [**ft\_makeabs()**](https://github.com/elidlocke/libft/blob/master/src/ft_makeabs.c) | The ft\_makeabs() function takes an integer and changes it to it's absolute value, while changing the sign variable that gets passed in (1 for positive or -1 for negative).|
| [**ft\_countwords()**](https://github.com/elidlocke/libft/blob/master/src/ft_countwords.c) | The function ft\_countwords() takes a string and a delimiter and counts the number of words between the delimiters.|
| [**ft\_getword()**](https://github.com/elidlocke/libft/blob/master/src/ft_getword.c) | The ft\_getword() function takes a string and a delimiter and returns a string with the letters between the start point of the string and the next delimiter.|
| [**ft\_gotonextword()**](https://github.com/elidlocke/libft/blob/master/src/ft_gotonextword.c) | The ft\_gotonextword() function takes a pointer to a string and moves the pointer forward to the next point that is past the next delimiter. if there is no more words in the string, the pointer is moved to the end of the string.|
| [**ft\_printlst()**](https://github.com/elidlocke/libft/blob/master/src/ft_printlst.c) | The function ft\_printlst() takes a linked list and prints the parameter content from each link in the list, assuming that the content is a string. Each parameter is followed by a newline.|
| [**ft\_realloc()**](https://github.com/elidlocke/libft/blob/master/src/ft_realloc.c) | The function ft\_realloc() creates a new string of the size passed in and copies the old data into the new string.|

| [**ft\_getnextline()**](https://github.com/elidlocke/libft/blob/master/src/ft_getnextline.c) | The function ft\_getnextline() gets the next line from an open file. Returns 1, 0 or -1 depending on whether a line has been read, when the reading has been completed, or if an error has happened respectively.|

## Credit

Thanks to the following testing frameworks for providing me with rigorous testing for each of the functions in my library:
- [Moulibft](https://www.moulibft.com/)
- [Libft Unit Test](https://github.com/alelievr/libft-unit-test)
- [Maintest](https://github.com/QuentinPerez/Maintest)
- [42 File Checker](https://github.com/jgigault/42FileChecker)

## Disclaimer

This is a project that was done for learning purposes only. This is not meant to be used as a replacement for the [GNU C Library](https://www.gnu.org/software/libc/).

If you are currently a 42 Student, feel free to look at my functions, but watch out for file structure. I cleaned up the file structure with a src and includes folder after the assignment was graded.

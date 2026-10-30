*This project has been created as part
of the 42 curriculum by jeguiber.*

# Libft

C library grouping functions for string and memory manipulation, conversion, writing, and linked-list management. This 42 project consists of reimplementing these tools in order to understand how they work and reuse them in future projects.

## Description

This project involves creating a custom C library named `libft.a` by reimplementing essential standard library functions. The goal is to strengthen understanding of memory management, pointers, string manipulation, and linked-list handling through practical implementation.

It includes functions for character checks, conversions, memory operations, string processing, file descriptor output, and list management. The library is organized around `libft.h` and a set of independent source files, following the constraints and coding standards of the 42 curriculum.

## The toolkit

### Character checks and conversions

| Function | Prototype | Returns | Role |
|---|---|---|---|
| `ft_isalpha` | `int ft_isalpha(int c)` | `1` if `c` is an ASCII letter, otherwise `0` | Checks whether `c` is a letter. |
| `ft_isdigit` | `int ft_isdigit(int c)` | `1` if `c` is a decimal digit, otherwise `0` | Checks whether `c` is a digit from `0` to `9`. |
| `ft_isalnum` | `int ft_isalnum(int c)` | `1` if `c` is a letter or digit, otherwise `0` | Checks whether `c` is alphanumeric. |
| `ft_isascii` | `int ft_isascii(int c)` | `1` if `c` is ASCII, otherwise `0` | Checks whether `c` is in the ASCII range `0`–`127`. |
| `ft_isprint` | `int ft_isprint(int c)` | `1` if `c` is printable, otherwise `0` | Checks whether `c` is a printable ASCII character, including the space. |
| `ft_toupper` | `int ft_toupper(int c)` | The converted character, or `c` if it is not an ASCII lowercase letter | Converts an ASCII lowercase letter to uppercase. |
| `ft_tolower` | `int ft_tolower(int c)` | The converted character, or `c` if it is not an ASCII uppercase letter | Converts an ASCII uppercase letter to lowercase. |
| `ft_atoi` | `int ft_atoi(const char *nptr)` | The integer read from the beginning of the string | Skips leading spaces, reads the sign, and then the digits that follow. |
| `ft_itoa` | `char *ft_itoa(int n)` | An allocated string, or `NULL` if allocation fails | Converts an integer to a string, including negative values. The resulting string must be freed with `free`. |

### String handling

| Function | Prototype | Returns | Role |
|---|---|---|---|
| `ft_strlen` | `size_t ft_strlen(const char *s)` | The number of bytes before `\0` | Measures the length of a string. |
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | A pointer to the first occurrence, or `NULL` | Searches for `c` in the string, including the null terminator. |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | A pointer to the last occurrence, or `NULL` | Searches for `c` from the end, including the null terminator. |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | A negative, zero, or positive integer | Compares up to `n` bytes of two strings. |
| `ft_strnstr` | `char *ft_strnstr(const char *big, const char *little, size_t len)` | A pointer to the first match, or `NULL` | Searches for `little` in the first `len` bytes of `big`. |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | The full length of `src` | Copies at most `size - 1` bytes and terminates `dst` with `\0` if `size` is non-zero. |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t size)` | The length the concatenated string would have had | Appends `src` to `dst` within the limit of `size`. |
| `ft_strdup` | `char *ft_strdup(const char *s)` | A duplicated string, or `NULL` if allocation fails | Duplicates a string. The copy must be freed with `free`. |
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | An allocated substring, or `NULL` | Creates a substring of at most `len` characters starting at `start`. |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | An allocated string, or `NULL` | Creates a string made of `s1` followed by `s2`. |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | An allocated string, or `NULL` | Removes characters from the beginning and end of `s1` that belong to `set`. |
| `ft_split` | `char **ft_split(char const *s, char c)` | An array of strings terminated by `NULL`, or `NULL` | Splits `s` around the separator `c`. Each string and the array are separately allocated and must be freed. |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | A new string, or `NULL` | Applies `f` to each character and its index, then stores the results in a new string. |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Nothing (`void`) | Calls `f` for each character and its index; `f` may modify the character. |

### Memory

| Function | Prototype | Returns | Role |
|---|---|---|---|
| `ft_memset` | `void *ft_memset(void *s, int c, size_t n)` | `s` | Fills the first `n` bytes of `s` with the value `c`. |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | Nothing (`void`) | Sets the first `n` bytes of `s` to zero. |
| `ft_memcpy` | `void *ft_memcpy(void *dest, const void *src, size_t n)` | `dest` | Copies `n` bytes from `src` to `dest`; the memory areas must not overlap. |
| `ft_memmove` | `void *ft_memmove(void *dest, const void *src, size_t n)` | `dest` | Copies `n` bytes from `src` to `dest`, including when the memory areas overlap. |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | A pointer to the found byte, or `NULL` | Searches for the first occurrence of `c` in the first `n` bytes. |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | A negative, zero, or positive integer | Compares the first `n` bytes of two memory areas. |
| `ft_calloc` | `void *ft_calloc(size_t nmemb, size_t size)` | A block initialized to zero, or `NULL` if allocation fails | Allocates `nmemb` elements of `size` bytes and zeroes the memory. The block must be freed with `free`. |

### File descriptor writing

| Function | Prototype | Returns | Role |
|---|---|---|---|
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Nothing (`void`) | Writes a character to the file descriptor `fd`. |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Nothing (`void`) | Writes a string to `fd`. |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Nothing (`void`) | Writes a string followed by a newline to `fd`. |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Nothing (`void`) | Writes the decimal representation of `n` to `fd`. |

### Linked lists

A list is made of nodes of type `t_list`. Each node contains a `content` pointer to its data and a `next` pointer to the next node; the last one points to `NULL`.

| Function | Prototype | Returns | Role |
|---|---|---|---|
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | The new node, or `NULL` if allocation fails | Allocates a node, stores `content`, and initializes `next` to `NULL`. |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new)` | Nothing (`void`) | Inserts `new` at the beginning of the list. |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new)` | Nothing (`void`) | Inserts `new` at the end of the list. |
| `ft_lstsize` | `int ft_lstsize(t_list *lst)` | The number of nodes | Counts the elements in the list. |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst)` | The last node, or `NULL` if the list is empty | Traverses the list until its last element. |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Nothing (`void`) | Frees the content using `del`, then frees the node; it does not affect the next node. |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *))` | Nothing (`void`) | Frees each node and its content using `del`, then sets the head to `NULL`. |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Nothing (`void`) | Applies `f` to the content of each node. |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | The new list, or `NULL` if allocation fails | Applies `f` to each content and builds a new list; uses `del` to clean up newly created contents if construction fails. |

## Compilation and usage

At the root of the repository, run `make` to compile the sources and create `libft.a`:

```sh
make
```

The Makefile uses `cc` with `-Wall -Wextra -Werror`, then `ar` to create the library. The other targets available are:

```sh
make clean   # removes object files
make fclean  # removes object files and libft.a
make re      # cleans and recompiles
```

To use the library, include `libft.h` and link `libft.a` when compiling:

```c
#include "libft.h"

int main(void)
{
	size_t length;

	length = ft_strlen("Hello, Libft!");
	if (length != 13)
		return (1);
	return (0);
}
```

```sh
cc -Wall -Wextra -Werror 
```

## Resources

- Official Libft subject (`en.subject.pdf`): required functions and project constraints.
- C manual pages: `man 3 atoi`, `man 3 itoa`, `man 3 memchr`, `man 3 memcmp`, `man 3 memcpy`, `man 3 memmove`, `man 3 memset`, `man 3 strnstr`, `man 3 strchr`, `man 3 strrchr`, `man 3 strlcpy`, `man 3 strlcat`, `man 3 calloc`, and `man 3 bzero`.
- C standard library documentation for prototypes and reference behavior.

### AI usage

AI assistance contributed to writing this README, provided guidance for creating the `main` files, and helped populate the `.c` files in the Makefile as well as the prototypes in `libft.h`. The implementation of the library remains the responsibility of the project author, who is accountable for its correctness and the information presented here.

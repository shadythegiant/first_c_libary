# Libft

## Description

Libft is my very first own library in C. This project involves coding a C library that includes numerous general-purpose functions that will be useful for my future C programming assignments.

The project is divided into two parts:

- **Mandatory Part**: Reimplementing standard libc functions and creating additional utility functions.
- **Bonus Part**: Implementing functions to manipulate linked lists.

---

## Mandatory Part

### Part 1 - Libc Functions

Reimplement the following standard C functions with the `ft_` prefix. Their behavior must match the original libc functions.

| Function   | Prototype                                                                 |
| ---------- | ------------------------------------------------------------------------- |
| ft_isalpha | `int ft_isalpha(int c);`                                                  |
| ft_isdigit | `int ft_isdigit(int c);`                                                  |
| ft_isalnum | `int ft_isalnum(int c);`                                                  |
| ft_isascii | `int ft_isascii(int c);`                                                  |
| ft_isprint | `int ft_isprint(int c);`                                                  |
| ft_strlen  | `size_t ft_strlen(const char *s);`                                        |
| ft_memset  | `void *ft_memset(void *b, int c, size_t len);`                            |
| ft_bzero   | `void ft_bzero(void *s, size_t n);`                                       |
| ft_memcpy  | `void *ft_memcpy(void *dst, const void *src, size_t n);`                  |
| ft_memmove | `void *ft_memmove(void *dst, const void *src, size_t len);`               |
| ft_strlcpy | `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);`          |
| ft_strlcat | `size_t ft_strlcat(char *dst, const char *src, size_t dstsize);`          |
| ft_toupper | `int ft_toupper(int c);`                                                  |
| ft_tolower | `int ft_tolower(int c);`                                                  |
| ft_strchr  | `char *ft_strchr(const char *s, int c);`                                  |
| ft_strrchr | `char *ft_strrchr(const char *s, int c);`                                 |
| ft_strncmp | `int ft_strncmp(const char *s1, const char *s2, size_t n);`               |
| ft_memchr  | `void *ft_memchr(const void *s, int c, size_t n);`                        |
| ft_memcmp  | `int ft_memcmp(const void *s1, const void *s2, size_t n);`                |
| ft_strnstr | `char *ft_strnstr(const char *haystack, const char *needle, size_t len);` |
| ft_atoi    | `int ft_atoi(const char *str);`                                           |
| ft_calloc  | `void *ft_calloc(size_t count, size_t size);`                             |
| ft_strdup  | `char *ft_strdup(const char *s1);`                                        |

### Part 2 - Additional Functions

| Function      | Prototype                                                         | Description                                                             |
| ------------- | ----------------------------------------------------------------- | ----------------------------------------------------------------------- |
| ft_substr     | `char *ft_substr(char const *s, unsigned int start, size_t len);` | Returns a substring from `s` starting at `start` with max length `len`. |
| ft_strjoin    | `char *ft_strjoin(char const *s1, char const *s2);`               | Concatenates `s1` and `s2` into a new string.                           |
| ft_strtrim    | `char *ft_strtrim(char const *s1, char const *set);`              | Trims characters from `set` from the start and end of `s1`.             |
| ft_split      | `char **ft_split(char const *s, char c);`                         | Splits `s` using delimiter `c` into an array of strings.                |
| ft_itoa       | `char *ft_itoa(int n);`                                           | Converts integer `n` to a string.                                       |
| ft_strmapi    | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Applies function `f` to each character of `s`.                          |
| ft_striteri   | `void ft_striteri(char *s, void (*f)(unsigned int, char*));`      | Applies function `f` to each character of `s` (in-place).               |
| ft_putchar_fd | `void ft_putchar_fd(char c, int fd);`                             | Writes char `c` to file descriptor `fd`.                                |
| ft_putstr_fd  | `void ft_putstr_fd(char *s, int fd);`                             | Writes string `s` to file descriptor `fd`.                              |
| ft_putendl_fd | `void ft_putendl_fd(char *s, int fd);`                            | Writes string `s` followed by a newline to `fd`.                        |
| ft_putnbr_fd  | `void ft_putnbr_fd(int n, int fd);`                               | Writes integer `n` to file descriptor `fd`.                             |

---

## Bonus Part

The bonus part includes functions for linked list manipulation. The following structure is used:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

### Linked List Functions

| Function        | Prototype                                                                  | Description                                      |
| --------------- | -------------------------------------------------------------------------- | ------------------------------------------------ |
| ft_lstnew       | `t_list *ft_lstnew(void *content);`                                        | Creates a new list node.                         |
| ft_lstadd_front | `void ft_lstadd_front(t_list **lst, t_list *new);`                         | Adds node `new` to the front of the list.        |
| ft_lstsize      | `int ft_lstsize(t_list *lst);`                                             | Counts the number of nodes in the list.          |
| ft_lstlast      | `t_list *ft_lstlast(t_list *lst);`                                         | Returns the last node of the list.               |
| ft_lstadd_back  | `void ft_lstadd_back(t_list **lst, t_list *new);`                          | Adds node `new` to the end of the list.          |
| ft_lstdelone    | `void ft_lstdelone(t_list *lst, void (*del)(void *));`                     | Deletes a single node using function `del`.      |
| ft_lstclear     | `void ft_lstclear(t_list **lst, void (*del)(void *));`                     | Deletes and frees the entire list.               |
| ft_lstiter      | `void ft_lstiter(t_list *lst, void (*f)(void *));`                         | Applies function `f` to each node's content.     |
| ft_lstmap       | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | Applies `f` to each node and creates a new list. |

---

## Compilation

The library is compiled using the provided `Makefile` with the following rules:

- `make` or `make all` - compiles the library `libft.a`
- `make bonus` - compiles the bonus functions and adds them to `libft.a`
- `make clean` - removes object files
- `make fclean` - removes object files and `libft.a`
- `make re` - recompiles the library

---

## Usage

Include the header in your C files:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
gcc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
```

Example usage of linked list functions:

```c
#include "libft.h"

int main(void)
{
    t_list *list = NULL;
    t_list *new_node;

    // Create and add nodes to the list
    new_node = ft_lstnew("Hello");
    ft_lstadd_front(&list, new_node);

    new_node = ft_lstnew("World");
    ft_lstadd_back(&list, new_node);

    // Print list size
    printf("List size: %d\n", ft_lstsize(list));

    // Clean up
    ft_lstclear(&list, free);
    return (0);
}
```

## Repository Structure

```
libft/
├── Makefile
├── libft.h
├── ft_*.c (source files for mandatory functions)
├── ft_*_bonus.c (source files for bonus functions)
└── README.md
```

---

L33T! 🚀

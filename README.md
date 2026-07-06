# Libft

*This project has been created as part of the 42 curriculum by smolines.*

## Description

**Libft** is a custom C library built from scratch as the very first project of the 42 curriculum. Its purpose is to recreate a set of standard C library functions and to implement additional utility functions — for string manipulation, memory management, and linked lists — that will be reused throughout the rest of the curriculum.

Rather than relying on the standard `libc`, this project forces a deep understanding of how these functions actually work under the hood: memory allocation, pointer arithmetic, buffer handling, and edge cases that the man pages define but are easy to overlook.

The result is a static library (`libft.a`) containing:
- Reimplementations of core `libc` functions (`ft_` prefixed)
- Additional string and array utility functions not found in the standard library
- A generic singly linked list implementation and its associated operations

## Instructions

### Compilation

```bash
git clone <repo-url>
cd libft
make
```

This produces `libft.a` at the root of the repository.

Other available Makefile rules:

| Rule | Description |
|---|---|
| `make` / `make all` | Compiles all mandatory sources into `libft.a` |
| `make bonus` | Compiles the mandatory sources **and** the bonus linked-list functions into `libft.a` |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | Recompiles the library from scratch |

All source files are compiled with `-Wall -Wextra -Werror`, and the archive is built with `ar`.

### Using the library in another project

```c
#include "libft.h"
```

Then link against the archive when compiling:

```bash
cc your_program.c -L./libft -lft -o your_program
```

## Library Overview

### Part 1 — Libc function reimplementations

Reimplementations of standard `libc` functions, matching their original prototypes and behavior:

`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup`

### Part 2 — Additional functions

Utility functions that either don't exist in `libc` or provide extended behavior:

| Function | Purpose |
|---|---|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a newly allocated one |
| `ft_strtrim` | Trims a set of characters from both ends of a string |
| `ft_split` | Splits a string into an array of strings using a delimiter |
| `ft_itoa` | Converts an integer to a newly allocated string |
| `ft_strmapi` | Applies a function to each character of a string, returning a new string |
| `ft_striteri` | Applies a function to each character of a string in place |
| `ft_putchar_fd` | Writes a character to a given file descriptor |
| `ft_putstr_fd` | Writes a string to a given file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a given file descriptor |
| `ft_putnbr_fd` | Writes an integer to a given file descriptor |

### Part 3 — Linked list (`t_list`)

A generic singly linked list, using a `void *content` field so it can store any data type:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Purpose |
|---|---|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of a list |
| `ft_lstsize` | Counts the number of nodes in a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstadd_back` | Adds a node at the end of a list |
| `ft_lstdelone` | Frees a single node and its content |
| `ft_lstclear` | Frees an entire list and its content |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Applies a function to each node's content and returns a new list |

### Bonus — Linked list functions

The following linked list functions have their own `_bonus` versions, compiled via `make bonus`:

`ft_lstnew_bonus`, `ft_lstadd_front_bonus`, `ft_lstsize_bonus`, `ft_lstlast_bonus`, `ft_lstadd_back_bonus`, `ft_lstdelone_bonus`, `ft_lstclear_bonus`, `ft_lstiter_bonus`

> **Note:** `ft_lstmap_bonus` is not implemented in this version.

## Resources

- [Linux man-pages project](https://man7.org/linux/man-pages/) — reference for the exact behavior/prototypes of the reimplemented `libc` functions
- [FreeBSD `string(3)` man pages](https://man.freebsd.org/) — reference for BSD-specific functions (`strlcpy`, `strlcat`, `bzero`) not present by default in glibc
- 42 Norm documentation — coding style constraints applied throughout the project

**AI usage disclosure:** AI (Claude, Anthropic) was used solely to help draft and structure this `README.md` file. No AI assistance was used to design, write, or debug the C source code (`libft.h`, `ft_*.c`, Makefile), which was implemented independently in accordance with 42's academic policy on AI use.

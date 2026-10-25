*This project has been created as part of the 42 curriculum by `<yoograme>`.*

# Libft

## Description

Libft is the first project of the 42 common core. The goal is to write our own C library by re-implementing several functions of the standard C library (`libc`), plus some additional utility functions. The result is a static library, `libft.a`, that can be reused in all later projects.

## Instructions

Run `make` at the root of the repository to build `libft.a`.

- `make`: builds the library
- `make clean`: removes the object files
- `make fclean`: removes the object files and `libft.a`
- `make re`: rebuilds everything

The code is compiled with `-Wall -Wextra -Werror`. To use the library, include `libft.h` in your source files and link your program with `-L. -lft`.

## Library description

`libft.a` is a static C library made of two parts. The first part re-implements functions from the standard C library (`libc`), keeping the same prototypes (with the `ft_` prefix) and the same behavior, including edge cases. The second part contains additional functions that are useful in later projects: string manipulation (`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`), conversion (`ft_itoa`), iteration over strings (`ft_strmapi`, `ft_striteri`), and output to a file descriptor (`ft_put*_fd`). Only `malloc`, `free` and `write` are used, and every function is written to respect the 42 Norm and to avoid memory leaks.

### Part 1: Libc functions

These functions re-implement the behavior of the original libc functions.

| Function | Explanation |
|---|---|
| `ft_isalpha` | Checks if a character is a letter (a-z or A-Z). |
| `ft_isdigit` | Checks if a character is a digit (0-9). |
| `ft_isalnum` | Checks if a character is a letter or a digit. |
| `ft_isascii` | Checks if a character is in the ASCII range (0-127). |
| `ft_isprint` | Checks if a character is printable (32-126). |
| `ft_strlen` | Returns the length of a string, without the null terminator. |
| `ft_memset` | Fills a block of memory with a given byte. |
| `ft_bzero` | Sets a block of memory to zero. |
| `ft_memcpy` | Copies n bytes from one memory area to another (areas must not overlap). |
| `ft_memmove` | Copies n bytes between memory areas, and handles overlapping safely. |
| `ft_strlcpy` | Copies a string into a buffer of a given size, always null-terminating it. Returns the length of the source. |
| `ft_strlcat` | Appends a string to another within a given buffer size, always null-terminating it. Returns the length it tried to create. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to n characters. |
| `ft_memchr` | Finds the first occurrence of a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas byte by byte, up to n bytes. |
| `ft_strnstr` | Finds the first occurrence of a substring in a string, searching at most n characters. |
| `ft_atoi` | Converts the beginning of a string to an integer. |
| `ft_calloc` | Allocates memory for an array and initializes it to zero. |
| `ft_strdup` | Returns a newly allocated copy of a string. |

### Part 2: Additional functions

These functions are not in the libc, or are written in a different form.

| Function | Explanation |
|---|---|
| `ft_substr` | Returns a new string extracted from a string, starting at a given index with a maximum length. |
| `ft_strjoin` | Returns a new string made of two strings concatenated. |
| `ft_strtrim` | Returns a copy of a string with the given set of characters removed from the start and the end. |
| `ft_split` | Splits a string using a delimiter character and returns a null-terminated array of new strings. |
| `ft_itoa` | Converts an integer to a newly allocated string. |
| `ft_strmapi` | Applies a function to each character of a string (with its index) and returns a new string with the results. |
| `ft_striteri` | Applies a function to each character of a string (with its index), modifying it in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

## Resources

- `man` pages (`man 3 strlcpy`, `man 3 memmove`, etc.)
- *The C Programming Language*, Kernighan & Ritchie
- The 42 Norm and the Libft subject

### AI usage

AI was used for the following tasks only:

- **Understanding concepts:** explanations of how some libc functions behave (for example `memmove` with overlapping memory, or the return values of `strlcpy` and `strlcat`).
- **Test ideas:** suggestions of edge cases to test my functions (empty strings, `NULL` inputs, size 0, integer limits).
- **README:** help with structuring and writing this README.md.

AI was not used to write the code of the library functions. All the code was written, understood and tested by me.
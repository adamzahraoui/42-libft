# Libft

**Libft** is a custom C library developed as a foundational project at 1337. This project involves recreating standard C library functions and additional utility functions, which will be reused throughout the entire curriculum. The goal is to gain a deeper understanding of how these functions work at a low level and to build a robust coding foundation.

## Table of Contents

- [Overview](#overview)
- [Library Functions](#library-functions)
  - [Memory Functions](#memory-functions)
  - [String Manipulation](#string-manipulation)
  - [Character Checks and Conversions](#character-checks-and-conversions)
  - [List Manipulation](#list-manipulation)
- [Usage](#usage)

## Overview

In this project, you will reimplement functions from the C standard library, providing insights into how they operate under the hood. The library includes functions for memory manipulation, string operations, character checks, and list management. Each function complies with Norminette standards, ensuring consistency and readability.

## Library Functions

### Memory Functions

- `ft_memset`: Fills the first `n` bytes of memory with a specified byte.
- `ft_bzero`: Zeros out `n` bytes of memory, often used to initialize arrays.
- `ft_memcpy`: Copies `n` bytes from a source memory area to a destination.
- `ft_memmove`: Safely copies `n` bytes from a source to destination, even if the memory areas overlap.
- `ft_memchr`: Searches for a byte in the first `n` bytes of memory.
- `ft_memcmp`: Compares two memory areas byte-by-byte.

### String Manipulation

- `ft_strlen`: Returns the length of a string.
- `ft_strdup`: Duplicates a string by allocating memory for it.
- `ft_strcpy`: Copies a string, including the null terminator.
- `ft_strncpy`: Copies up to `n` characters of a string.
- `ft_strcat`: Appends a string to the end of another.
- `ft_strncat`: Appends up to `n` characters from one string to another.
- `ft_strchr`: Finds the first occurrence of a character in a string.
- `ft_strrchr`: Finds the last occurrence of a character in a string.
- `ft_strstr`: Locates a substring in a string.
- `ft_strnstr`: Locates a substring within the first `n` characters of a string.
- `ft_strcmp`: Compares two strings lexicographically.
- `ft_strncmp`: Compares up to `n` characters of two strings lexicographically.
- `ft_atoi`: Converts a string to an integer.

### Character Checks and Conversions

- `ft_isalpha`: Checks if a character is alphabetic.
- `ft_isdigit`: Checks if a character is a digit.
- `ft_isalnum`: Checks if a character is alphanumeric.
- `ft_isascii`: Checks if a character is an ASCII character.
- `ft_isprint`: Checks if a character is printable.
- `ft_toupper`: Converts a lowercase letter to uppercase.
- `ft_tolower`: Converts an uppercase letter to lowercase.

### Additional Utility Functions

- `ft_calloc`: Allocates memory for an array and initializes all bytes to zero.
- `ft_substr`: Extracts a substring from a given string.
- `ft_strjoin`: Concatenates two strings into a new string.
- `ft_strtrim`: Removes specified characters from the beginning and end of a string.
- `ft_split`: Splits a string into an array of substrings based on a delimiter.
- `ft_itoa`: Converts an integer to a string.
- `ft_strmapi`: Applies a function to each character of a string to create a new string.
- `ft_putchar_fd`: Writes a character to a specified file descriptor.
- `ft_putstr_fd`: Writes a string to a specified file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline to a specified file descriptor.
- `ft_putnbr_fd`: Writes an integer to a specified file descriptor.

### List Manipulation

- `ft_lstnew`: Creates a new list element.
- `ft_lstadd_front`: Adds an element to the beginning of a list.
- `ft_lstsize`: Returns the number of elements in a list.
- `ft_lstlast`: Returns the last element of a list.
- `ft_lstadd_back`: Adds an element to the end of a list.
- `ft_lstdelone`: Deletes a single element from a list.
- `ft_lstclear`: Deletes all elements from a list.
- `ft_lstiter`: Iterates over a list and applies a function to each element.
- `ft_lstmap`: Creates a new list by applying a function to each element of an existing list.

## Usage

To use **Libft** in your projects, include the `libft.a` library file and the header `libft.h`. You can then call any of the above functions as needed.

### Compilation

To compile the library and manage files, use the following commands in your terminal:

- `make`: Compiles the library into `libft.a`.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the `libft.a` library.
- `make re`: Recompiles the library from scratch.

## License

This project is licensed under the [MIT License](LICENSE).

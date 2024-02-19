# libft

## Overview

The libft project, part of the Hive Helsinki curriculum, involves the implementation of various libc functions. This endeavor not only includes the recreation of standard C library functions but also extends to the implementation of printf, alongside functions for vector and matrix operations. The primary goal of this project is to deepen the understanding of these fundamental functions by rewriting them, thereby enhancing the learning experience for all future C programming projects.

## Project Objectives

C Programming Practice: The essence of this project lies in the meticulous recreation of standard library functions. This practice is aimed at fostering a deeper understanding of these functions, their underlying mechanisms, and their application.
Library Creation: As a result of this project, students will compile a personal library of functions, libft, which will serve as a valuable tool for all future C programming endeavors.

## Included Functions

### Standard Libc Functions

Memory management: `ft_memset, ft_bzero, ft_memcpy, ft_memccpy, ft_memmove, ft_memchr, ft_memcmp`  
String manipulation: `ft_strlen, ft_strdup, ft_strcpy, ft_strncpy, ft_strcat, ft_strlcat, ft_strchr, ft_strrchr, ft_strstr, ft_strnstr, ft_strcmp, ft_strncmp`  
Conversion: `ft_atoi`  
Character checks: `ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint`  
Case conversion: `ft_toupper, ft_tolower`  

### Additional Functions

Dynamic memory allocation: `ft_memalloc, ft_memdel`  
String creation and manipulation: `ft_strnew, ft_strdel, ft_strclr, ft_striter, ft_striteri, ft_strmap, ft_strmapi, ft_strequ, ft_strnequ, ft_strsub, ft_strjoin, ft_strtrim, ft_strsplit, ft_itoa`  
Output: `ft_putchar, ft_putstr, ft_putendl, ft_putnbr, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd`  

### Bonus Functions

Linked list operations: `ft_lstnew, ft_lstdelone, ft_lstdel, ft_lstadd, ft_lstiter, ft_lstmap`  

## Personal Functions

Mathematical and utility functions: `ft_abs_d, ft_clamp_d, ft_dtoa, ft_get_next_line, ft_inv_lerp_d, ft_inv_lerp_f, ft_itoa_base, ft_itoa_base_ull, ft_itoa_ll, ft_itoa_ull, ft_lerp_d, ft_lerp_f, ft_make_pair_d, ft_map_range, ft_max, ft_max_d, ft_min, ft_ndigits_base, ft_ndigits_base_ll, ft_ndigits_base_ull, ft_ndigits, ft_ndigits_d, ft_nwords, ft_pow, ft_strrev, ft_strtod, ft_strtok, ft_swap_d, ft_swap_f`  

### printf and Vector/Matrix Operations

`ft_printf, ft_sprintf, ft_vsprintf` for formatted output.  
Vector operations: `ft_add_vec3, ft_cross_vec3, ft_div_vec3, ft_dot_vec3, ft_invert_vec3, ft_len_vec3, ft_make_vec3, ft_mul_vec3, ft_mul_vec3_vec3, ft_normalize_vec3, ft_reflect_vec3, ft_set_vec3, ft_sub_vec3`  
Matrix operations: `ft_create_rot_mat4, ft_create_rotx_mat4, ft_create_roty_mat4, ft_create_rotz_mat4, ft_create_scale_mat4, ft_create_trans_mat4, ft_ident_mat4, ft_lookat_mat4, ft_mul_dir_vec3_mat4, ft_mul_mat4_mat4, ft_mul_vec3_mat4, ft_trs_mat4`  

## Conclusion

The libft project is a comprehensive exercise in C programming, offering students a hands-on approach to understanding and implementing fundamental programming concepts. By recreating and extending the functionality of the standard C library, students not only enhance their programming skills but also build a personal toolkit that will support their future projects.

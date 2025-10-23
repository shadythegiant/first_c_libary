void *ft_memmove(void *dest, const void \*src, size_t n)

-- check for dest == src || n == 0; return dest ;
-- cast to unsigned char to avoid issues if even code works without it;

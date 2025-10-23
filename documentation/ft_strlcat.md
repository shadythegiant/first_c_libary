size_t ft_strlcat(char *dest, const char *src, size_t size)

> > steps to implement

    1 - find length of dest :
     while( dest[dest_len] && dest_len < size)
        dest_len++;
    . if dest is full (dest_len == size ) return

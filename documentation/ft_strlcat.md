size_t ft_strlcat(char *dest, const char *src, size_t size)

> > steps to implement

    1 - find length of dest :
     while( dest[dest_len] && dest_len < size)
        dest_len++;
    . if dest is full (dest_len == size ) return

    . while (src[i] && dest_le + src_len + 1 < size )
            while src doesn't equal to null term
            . while lenght of dest and src + 1 ( for the null terminator )
    . always turn dest_len + src_len to check if truncation happened

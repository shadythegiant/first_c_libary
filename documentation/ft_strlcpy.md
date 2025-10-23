> > size_t ft_strlcpy(char *dest, const char *src, size_t size)
> > -- return type is alway src_length

    this is done to check for truncation
    if return value < dst size = This means the source string's length was smaller than the destination buffer. Everything fit perfectly, including the null terminator. No truncation occurred.
    return_value >= dstsize This means the source string's length was equal to or larger than the destination buffer. The string had to be cut short (truncated) to fit.

    >>-- size == 0 return src_len
    >> -

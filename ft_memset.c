#include "libft.h"

void ft_memset(void *buffer , int c , size_t size) { 
    size_t counter = 0; 
    unsigned low8bits = c & 0xFF; 
    char *byt_ptr = (char *)buffer; 

    while(counter < size ) {    
        byt_ptr[counter] = low8bits; 
        counter++; 
    } 
 }
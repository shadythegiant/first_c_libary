#include "libft.h"
#include <stdio.h>

static size_t ft_ischarset(char c, char const *set) {
    size_t i; 
    i = 0; 
    while(set[i]) {
        if(c == set[i] ) {
            return 1; 
        }
        i++; 
    }
    return 0; 
}
char *ft_strtrim(char const *s1, char const *set) {
    size_t start_index; 
    size_t size; 
    char *result;
    char const *start ; 
    char const *end; 

    start = s1; 
    end = (start + (ft_strlen(s1) -1) );
    

    if(start > end) { 
        result = malloc(1); 
        if(!result)
            return NULL; 
        result[0] = '\0'; 
        return result;     
    }
   
    while(*start && ft_ischarset(*start, set) )
        start++; 
    
    while(end >= start && ft_ischarset(*end, set))
        end--; 
     size = (end - start ) + 1; 
     start_index = ( start - s1 ); 
    result = malloc(sizeof(char) * (size + 1)); 
    if(!result)
        return NULL; 
    result = ft_substr(s1, start_index, size ); 
    return (result); 
}

int main() { 
    char *s = " -hello";
    char *set = " -"; 
    char *result = ft_strtrim(s, set); 
    printf("%s", result);   
}
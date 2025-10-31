1 - Functionality :
Allocates memory (using malloc(3)) and returns a
substring from the string ’s’.
The substring starts at index ’start’ and has a
maximum length of ’len’

2 - prototype :
char *ft_substr(char const *s, unsigned int start,
size_t len)

3- implementation:

- initialize string_length , substring length , a str sub
- check if string is NULL , calculate string length
- check if start is longer than string lenght if so allocate 1 byte string and assign null termination to it an return it;
- check if start + s_len < len
  if so sub_len = s_len - start ;
  else : sub_len = len;

- malloc sub with sub_len + 1;
- memcpy
- add null termination
- return sub;

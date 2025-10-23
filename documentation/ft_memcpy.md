> > prototype

- void *ft_memcpy(void char *dest , void const \*src, size_t size) {

## }

destination : dest
src : source string
size to be copied

-- memcpy doesn't account for overlap
-- always returns a pointer dest even if src is NULL
-- n = 0 || dest = src meaning if src and dest are pointing to the same memory adress we return dest
-- cast to unsgined char the pointer vars

-- what to do when implemnting memcpy
check if dest == src || n == 0
overlap check ( dest > src || dest < src )

-- points of confusion (prefix and suffix increment )
(while ( n-- > 0))
this uses value n in the condition check
then increments before the body of the loop
so in the body n = n -1;

Understanding memset 
>> void *ft_memset(vois *s, int c, size_t size)	
	buffer , 500, 4
	
buffer : 0x1000
int c = 500; 
size = 4; 

c = 0000000 00000000 00000001 11110100	 (32bit) 

>> the function of memset writes the represantation of lowest 8bit 

>> lowest_8bit = does a AND bitwise operation 
 	 
	c = 0000000 00000000 00000001 11110100  (500) 
	0xFF = 00000000 00000000 00000000 11111111 (255) 
	lowest_8bit 00000000 00000000 00000000 11110100 (244)
	Result = (244) (0xF4) 


>> 
unsigned char	0 to 255	255	All 8 bits used for value
signed char	-128 to 127	127	One bit for sign, 7 bits for value
char	Depends on compiler	127 or 255	Could be signed or unsigned by default

>> 
	
	
	
	
				

#include <string.h>
#include <unistd.h>
void ft_putchar (char c) { 
        write(1, &c, 1); 
}


int main() { 
    char buffer[10]; 
    int counter = 0; 

    memset(buffer, 'a', sizeof(char) *  10); 
    while(counter <= 10) {
        ft_putchar(buffer[counter]); 
        counter++; 
    }

    return 0; 
}
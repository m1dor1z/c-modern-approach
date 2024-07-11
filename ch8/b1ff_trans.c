#include <stdio.h>
#include <ctype.h>
#include <string.h>

char b_translate(char c)
{
    switch(tolower(c))
    {
        case 'a':
            return '4';
        case 'b':
            return '8';
        case 'e':
            return '3';
        case 'i':
            return '1';
        case 'o':
            return '0';
        case 's':
            return '5';
        default:
            return toupper(c);
    }
}


int main(void)
{
    char c_message[200], original_message[200];
    int i = 0, j = 0;

    printf("Enter a message: ");
    fgets(original_message, sizeof(original_message), stdin);
    
    original_message[strcspn(original_message, "\n")] = '\0';

    // for(i = 0; original_message[i] != '\0'; i++)
    // {
    //     c_message[j++] = b_translate(original_message[i]);
    // }

    while(original_message[i] != '\0')
    {
        c_message[j++] = b_translate(original_message[i++]);
    }

    for (int k = 0; k < 10; k++)
    {
        c_message[j++] = '!';
    }

    c_message[j] = '\0';

    printf("In B1FF-speak: %s\n", c_message);
    return 0;
}
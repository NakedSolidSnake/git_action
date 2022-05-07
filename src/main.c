#include <stdio.h>

int main (int argc, char *argv[])
{
    printf ("Hello World\n");
    printf ("New message\n");


    void print (const char *msg)
    {
        printf ("%s\n", msg);      
    }

    void (*f) (const char *msg) = print;

    f("Hello");

    return 0;
}
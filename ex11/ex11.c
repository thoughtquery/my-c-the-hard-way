#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = { 0 };
    char name[6] = { 'a', 'a', 'a', 'a', 'a', 'a' };

    // Print raw first
    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name each: %c %c %c %c %c %c\n",
            name[0], name[1], name[2], name[3], name[4], name[5]);

    printf("name: %s\n", name);

    // setup the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    // setup the name
    name[0] = 'A';
    name[1] = 'n';
    name[2] = 'd';
    name[3] = 'r';
    name[4] = 'e';
    name[5] = 'w';

    printf("print out initialized\n");

    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name each: %c %c %c %c %c %c\n",
            name[0], name[1], name[2], name[3], name[4], name[5]);

    printf("print name like string\n");

    printf("name: %s\n", name);

    // another way to use name
    char *another = "Andrew";

    printf("another: %s\n", another);

    printf("another each: %c %c %c %c %c %c",
            another[0], another[1], another[2], another[3], another[4], another[5]);

    return 0;
}

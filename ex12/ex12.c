#include <stdio.h>


int main(int argc, char *argv[])
{

    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Andrew";
    char full_name[] = {
        'A', 'n', 'd', 'r', 'e', 'w',
            ' ', 'M', ' ',
        'B', 'e', 'n', 'a', 'v', 'i', 'd', 'e', 's'
    };

    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("The number of ints in an area: %ld\n", sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd area is %d\n", areas[0], areas[1]);
    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n", sizeof(name));
    printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
    printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));

    full_name[19] = 'X';

    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);
    return 0;
}

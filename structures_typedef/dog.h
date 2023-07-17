#include <stdio.h>
/**
 *struct my_struct - poppy structure
 *@name: first member
 *@owner: second member
 *@age: third member
 *Description: with this structure we will begin our structires and typedef project
 */
struct dog
{
char *name;
char *owner;
float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

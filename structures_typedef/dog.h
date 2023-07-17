#ifndef DOG_H
#define DOG_H
/**
 *struct dog - poppy structure
 *@name: first member
 *@owner: second member
 *@age: third member
 *Description: this structure we will begin our structures and typedef
 */
struct dog
{
char *name;
char *owner;
float age;
};

/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

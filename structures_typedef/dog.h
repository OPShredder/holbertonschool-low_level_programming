#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* New function prototype for creating a new dog */
dog_t *new_dog(char *name, float age, char *owner);

/* Other necessary includes and structures */

void free_dog(dog_t *d);

/* Other function prototypes if needed */

#endif /* DOG_H */

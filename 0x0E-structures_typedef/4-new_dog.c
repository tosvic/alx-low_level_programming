#include "dog.h"

#include <stdlib.h>

#include <stdio.h>

/**
 *
 *  * new_dog - new dog
 *
 *   * @name: name's dog
 *
 *    * @age: age's dog
 *
 *     * @owner: owner's dog
 *
 *      * Return: newdog
 *
 *       */

dog_t *new_dog(char *name, float age, char *owner)

{



		int i = 0, j = 0, k;

			dog_t *doge;



				while (name[i] != '\0')

							i++;

					while (owner[j] != '\0')

								j++;

						doge = malloc(sizeof(dog_t));

							if (doge == NULL)

									{

												free(doge);

														

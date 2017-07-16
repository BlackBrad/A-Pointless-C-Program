//A pointless C program
//Written by Bradley Black 2017

#include <stdio.h>
#include <string.h>
#include "Dog.h" 

int main(void){
	dog a_dog;//I suppose the struct is unecessary. 
	strcpy(a_dog.name, "A Dogs Name");
	strcpy(a_dog.breed, "A Dogs Breed");
	a_dog.age = 4;
	printf("Dogs name: %s  Breed: %s  Age: %d\n", a_dog.name, a_dog.breed, a_dog.age);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct person {
    char name[50];
    int age;
    float height;
};

int main() {
    int num_ppl;

    printf("Enter the number of people: ");
    scanf("%d", &num_ppl);

    struct person *people = malloc(num_ppl * sizeof(struct person));

    for (int i = 0; i < num_ppl; i++) {
        printf("\nEnter details for person %d:\n", i+1);
        printf("Name: ");
        scanf("%s", (people+i)->name);
        printf("Age: ");
        scanf("%d", &(people+i)->age);
        printf("Height (in meters): ");
        scanf("%f", &(people+i)->height);
    }

    printf("\nDetails of %d people:\n", num_ppl);
    for (int i = 0; i < num_ppl; i++) {
        printf("Person %d:\n", i+1);
        printf("Name: %s\n", (people+i)->name);
        printf("Age: %d\n", (people+i)->age);
        printf("Height: %.2f meters\n", (people+i)->height);
    }

    free(people);

    return 0;
}

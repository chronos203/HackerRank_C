#include <stdio.h>
#include <stdlib.h>

int marks_summation(int *marks, char gender, int number_of_students)
{
    int total = 0;

    if(gender == 'b')
    {
        for (int i = 0; i < number_of_students; i += 2)
            total = total + *(marks+i);        
    }

    else if(gender == 'g')
    {
        for (int i = 1; i < number_of_students; i += 2)
            total = total + *(marks+i);
    }

    return total;
}

int main()
{
    int number_of_students, sum;
    char gender;

    scanf("%d", &number_of_students);

    int *marks = (int *) malloc(number_of_students * sizeof(int));

    for (int i = 0; i < number_of_students; i++)
        scanf("%d", (marks + i));
    
    
    scanf(" %c", &gender);

    sum = marks_summation(marks, gender, number_of_students);
    printf("%d", sum);
    free(marks);
}
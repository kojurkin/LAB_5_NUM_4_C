#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in_file = fopen("input.txt", "r");
    int size;
    fscanf(in_file, "%d", &size);
    double* array = malloc( size * sizeof(double));
    for (int i = 0; i < size; i++)
    {
        fscanf(in_file, "%lf", &array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%lf ", array[i]);
    }
    free(array);
    fclose(in_file);
    return 0;
}

// Emulate a double array using char array

#include <stdio.h>
#include <stdlib.h>

int main () {
    char *array = malloc (2 * sizeof (double));
    
    // Read 2 doubles
    printf ("Enter two doubles: ");
    scanf ("%lf %lf", (double *)array, (double *)(array + sizeof (double)));
    printf ("%lf %lf\n", *((double *)array), *((double *)(array + sizeof (double))));

    free (array);
}

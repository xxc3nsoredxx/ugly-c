// Emulate a double array using chars

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main () {
    char *array = malloc (2 * sizeof (double));
    double d1, d2;
    
    // Read 2 doubles
    printf ("Enter two doubles: ");
    scanf ("%lf %lf", &d1, &d2);
    memcpy (array, &d1, sizeof (double));
    memcpy (array + sizeof (double), &d2, sizeof (double));
    printf ("%d.%d\n", (int) *((double *)array), (int) (*((double *)(array + sizeof (double))) * 100));

    free (array);
}

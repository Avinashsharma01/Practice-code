#include <stdio.h>
#include <time.h> // For clock() and CLOCKS_PER_SEC

int main()
{
    clock_t start, end; // Declare variables for start and end time
    int n = 0;

    start = clock(); // Record the start time

    while (n < 1000000000)
    {
        n = n + 1;
    }

    end = clock(); // Record the end time

    // Calculate the execution time in seconds
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Value of n: %d\n", n);
    printf("Execution time: %.2f seconds\n", time_taken);

    return 0;
}

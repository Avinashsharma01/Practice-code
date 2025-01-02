#include <iostream>
#include <chrono> // For high-resolution clock

using namespace std;

int main()
{
    long long int n = 0;

    // Record start time
    auto start = chrono::high_resolution_clock::now();

    // Perform the computation
    while (n < 1000000000)
    {
        n += 1;
    }

    // Record end time
    auto end = chrono::high_resolution_clock::now();

    // Calculate execution time in seconds
    chrono::duration<double> time_taken = end - start;

    cout << "Value of n: " << n << endl;
    cout << "Execution time: " << time_taken.count() << " seconds" << endl;

    return 0;
}

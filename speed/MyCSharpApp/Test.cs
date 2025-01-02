using System;
using System.Diagnostics;

class Program
{
    static void Main()
    {
        var stopwatch = Stopwatch.StartNew(); // Record the start time
        int n = 0;

        while (n < 1_000_000_000)
        {
            n++;
        }

        stopwatch.Stop(); // Record the end time
        double timeTaken = stopwatch.Elapsed.TotalSeconds; // Calculate execution time in seconds

        Console.WriteLine($"Value of n: {n}");
        Console.WriteLine($"Execution time: {timeTaken:F2} seconds");
    }
}

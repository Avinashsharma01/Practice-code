package main

import (
	"fmt"
	"time"
)

func main() {
	start := time.Now() // Record the start time
	n := 0

	for n < 1_000_000_000 {
		n++
	}

	end := time.Now()                     // Record the end time
	timeTaken := end.Sub(start).Seconds() // Calculate execution time in seconds

	fmt.Printf("Value of n: %d\n", n)
	fmt.Printf("Execution time: %.2f seconds\n", timeTaken)
}

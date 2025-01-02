let n = 0;

// Record start time
const start = Date.now();

// Perform the computation
while (n < 1000000000) {
    n += 1;
}

// Record end time
const end = Date.now();

// Calculate execution time in seconds
const timeTaken = (end - start) / 1000;

console.log("Value of n:", n);
console.log("Execution time:", timeTaken.toFixed(2), "seconds");

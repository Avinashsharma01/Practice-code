import time

n = 0

# Record start time
start = time.time()

# Perform the computation
while n < 1000000000:
    n += 1

# Record end time
end = time.time()

# Calculate execution time
time_taken = end - start

print("Value of n:", n)
print(f"Execution time: {time_taken:.2f} seconds")

public class Test {
    public static void main(String[] args) {
        int n = 0;

        // Record start time
        long start = System.currentTimeMillis();

        // Perform the computation
        while (n < 1000000000) {
            n += 1;
        }

        // Record end time
        long end = System.currentTimeMillis();

        // Calculate execution time
        double timeTaken = (end - start) / 1000.0;

        System.out.println("Value of n: " + n);
        System.out.println("Execution time: " + timeTaken + " seconds");
    }
}

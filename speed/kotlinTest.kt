import kotlin.system.measureTimeMillis

fun main() {
    val timeTaken = measureTimeMillis {
        var n = 0
        while (n < 1_000_000_000) {
            n++
        }
        println("Value of n: $n")
    }
    println("Execution time: ${timeTaken / 1000.0} seconds")
}

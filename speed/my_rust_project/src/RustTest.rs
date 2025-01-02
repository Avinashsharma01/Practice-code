use std::time::Instant;

fn main() {
    let start = Instant::now(); // Record the start time
    let mut n = 0;

    while n < 1_000_000_000 {
        n += 1;
    }

    let duration = start.elapsed(); // Record the end time
    println!("Value of n: {}", n);
    println!("Execution time: {:.2} seconds", duration.as_secs_f64());
}

use std::io::stdin;
use std::str::FromStr;

fn input_t<T: FromStr>() -> T {
    let mut s: String = String::new();
    stdin().read_line(&mut s).ok().unwrap();
    s.trim().parse().ok().unwrap()
}

fn main() {
    let x: usize = input_t();

    let mut total: usize = 0;
    for i in 1..=6 {
        for j in 1..=6 {
            if i + j == x {
                total += 1;
            }
        }
    }
    println!("{}", total as f64 / 6. / 6.);
}

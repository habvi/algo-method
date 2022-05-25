use std::io::stdin;
use std::str::FromStr;

fn input_t<T: FromStr>() -> T {
    let mut s: String = String::new();
    stdin().read_line(&mut s).ok().unwrap();
    s.trim().parse().ok().unwrap()
}

fn input_vec<T: FromStr>() -> Vec<T> {
    input_t::<String>()
        .split_whitespace()
        .map(|e| e.parse().ok().unwrap())
        .collect()
}

fn main() {
    let n: usize = input_t();
    let a: Vec<usize> = input_vec();

    const MX: usize = 100_000;
    let mut num: Vec<usize> = vec![0; MX + 1];
    for x in &a {
        num[*x] += 1;
    }

    let total: usize = n * (n - 1) / 2;
    let mut same: usize = 0;
    for x in num {
        if x >= 2 {
            same += x * (x - 1) / 2;
        }
    }
    println!("{}", same as f64 / total as f64);
}

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
    let tmp: Vec<usize> = input_vec();
    let n: usize = tmp[0];
    let mut p2: usize = tmp[1];
    let mut p1: usize = tmp[2];

    let mut now: usize = 0;
    for _ in 0..n - 2 {
        now = (p1 + p2) % 100;
        p2 = p1;
        p1 = now;
    }
    println!("{}", now);
}

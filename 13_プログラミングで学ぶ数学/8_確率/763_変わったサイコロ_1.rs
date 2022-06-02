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
    let nx: Vec<usize> = input_vec();
    let x: usize = nx[1];

    let v: Vec<usize> = input_vec();
    let mut ans: f64 = 0.;
    for (i, &p) in v.iter().enumerate() {
        if (i + 1) % x == 0 {
            ans += p as f64 / 100.;
        }
    }
    println!("{}", ans);
}

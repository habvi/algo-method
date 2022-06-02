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
    #[allow(unused_variables)]
    let nm: Vec<usize> = input_vec();
    let p: Vec<usize> = input_vec();
    let d: Vec<usize> = input_vec();

    let mut ans: f64 = 1.;
    for num in d {
        ans *= p[num - 1] as f64 / 100.;
    }
    println!("{}", ans);
}

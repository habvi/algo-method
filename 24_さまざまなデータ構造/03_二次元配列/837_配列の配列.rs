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
    let nt: Vec<String> = input_vec();
    let n: usize = nt[0].parse().ok().unwrap();
    let target: &str = &nt[1];

    let mut ans: usize = 0;
    for _ in 0..n {
        let ms: Vec<String> = input_vec();
        for color in ms[1..].iter() {
            if color == target {
                ans += 1;
            }
        }
    }
    println!("{}", ans);
}

use std::io::stdin;
use std::str::FromStr;
use std::cmp::Reverse;

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
    let v: Vec<usize> = input_vec();

    let mut ct = vec![0; n];
    for x in v {
        ct[x] += 1;
    }
    let mut vote: Vec<_> = ct.iter().enumerate().collect();
    vote.sort_by_key(|&(i, x)| (Reverse(x), i));
    for (i, x) in vote {
        println!("{} {}", i, x);
    }
}

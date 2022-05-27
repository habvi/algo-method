use std::io::stdin;
use std::str::FromStr;
use std::cmp::min;

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

fn comb(n: usize, r: usize) -> usize {
    let n1: usize = n + 1;
    let r: usize = min(r, n - r);
    let mut nmrt: usize = 1;
    let mut dnmnt: usize = 1;
    for i in 1..=r {
        nmrt = nmrt * (n1 - i);
        dnmnt *= i;
    }
    nmrt / dnmnt
}

fn main() {
    let nm: Vec<usize> = input_vec();
    let n: usize = nm[0];
    let mut m: usize = nm[1];

    if n > m {
        println!("0");
        return;
    }
    m -= n;
    println!("{}", comb(n + m - 1, n - 1));
}

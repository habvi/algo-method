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
    if n < r {
        return 0;
    }
    let r: usize = min(r, n - r);
    let mut nmrt: usize = 1;
    let mut dnmnt: usize = 1;
    for i in 1..=r {
        nmrt = nmrt * (n + 1 - i);
        dnmnt *= i;
    }
    nmrt / dnmnt
}

fn main() {
    let nm: Vec<usize> = input_vec();
    let n: usize = nm[0];
    let m: usize = nm[1];

    let mut ans: usize = 0;
    for i in 0..=m {
        ans += comb(i + n - 1, n - 1);
    }
    println!("{}", ans);
}

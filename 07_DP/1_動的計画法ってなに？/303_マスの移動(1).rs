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

fn main() {
    let n: usize = input_t();
    let v: Vec<usize> = input_vec();

    const INF: usize = 1001001001;
    let mut dp = vec![INF; n];
    dp[0] = 0;
    for i in 1..n {
        dp[i] = min(dp[i], dp[i - 1] + v[i]);
        if i >= 2 {
            dp[i] = min(dp[i], dp[i - 2] + 2 * v[i]);
        }
    }
    println!("{}", dp[n - 1]);
}

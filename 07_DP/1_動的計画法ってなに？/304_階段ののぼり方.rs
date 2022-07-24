use std::io::stdin;
use std::str::FromStr;

fn input_t<T: FromStr>() -> T {
    let mut s: String = String::new();
    stdin().read_line(&mut s).ok().unwrap();
    s.trim().parse().ok().unwrap()
}

fn main() {
    let n: usize = input_t();

    let mut dp: Vec<usize> = vec![0; n + 1];
    dp[0] = 1;
    for i in 1..=n {
        dp[i] += dp[i - 1];
        if i >= 2 {
            dp[i] += dp[i - 2];
        }
    }
    println!("{}", dp[n]);
}

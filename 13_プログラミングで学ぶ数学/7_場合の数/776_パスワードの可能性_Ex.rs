use std::io::stdin;
use std::str::FromStr;

fn input_t<T: FromStr>() -> T {
    let mut s: String = String::new();
    stdin().read_line(&mut s).ok().unwrap();
    s.trim().parse().ok().unwrap()
}

fn main() {
    let n: usize = input_t();

    let mut ans: usize = n;
    for i in 1..n {
        ans *= 10 - i;
    }
    println!("{}", ans);
}

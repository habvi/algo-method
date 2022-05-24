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
    let n: usize = input_t();
    let a: Vec<usize> = input_vec();

    const MX: usize = 5 * 100_000;
    let mut num: Vec<usize> = vec![0; MX + 1];
    for &x in &a {
        num[x] += 1;
    }

    let mut ans: Vec<usize> = vec![0; MX + 1];
    for i in 1..MX + 1 {
        for j in (i..MX + 1).step_by(i) {
            ans[i] += num[j];
        }
    }

    let q: usize = input_t();
    for _ in 0..q {
        let x: usize = input_t();
        println!("{}", ans[x]);
    }
}

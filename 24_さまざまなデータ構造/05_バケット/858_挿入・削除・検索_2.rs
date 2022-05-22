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
    let v: Vec<usize> = input_vec();

    let mx: usize = 100_000;
    let mut num: Vec<usize> = vec![0; mx + 1];
    for a in v {
        num[a] += 1;
    }

    let q: usize = input_t();
    for _ in 0..q {
        let qs: Vec<usize> = input_vec();
        match qs[..] {
            [0, x] => num[x] += 1,
            [1, x] => num[x] = 0,
            [2, x] => println!("{}", num[x]),
            _ => unreachable!()
        }
    }
}

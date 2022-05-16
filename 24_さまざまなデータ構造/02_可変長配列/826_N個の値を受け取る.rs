use std::io::stdin;

fn input_multi_i() -> (usize, usize) {
    let mut s: String = String::new();
    stdin().read_line(&mut s).unwrap();
    s.trim().to_string();
    let mut iter = s.split_whitespace();
    (
        iter.next().unwrap().parse().unwrap(),
        iter.next().unwrap().parse().unwrap(),
    )
}

fn input_i_vec() -> Vec<usize> {
    let mut s: String = String::new();
    stdin().read_line(&mut s).unwrap();
    s.trim()
        .split_whitespace()
        .map(|e| e.parse().unwrap())
        .collect()
}

fn main() {
    let (n, k) = input_multi_i();
    let v = input_i_vec();

    println!("{}", v[k]);
    println!("{}", v[n - k - 1]);
}
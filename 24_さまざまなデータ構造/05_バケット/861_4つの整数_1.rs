use std::collections::HashSet;
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
    let nm: Vec<usize> = input_vec();
    let m: usize = nm[1];
    let mut v: Vec<usize> = input_vec();
    v = v.iter().map(|&x| x * x).collect();

    let mut cand: HashSet<usize> = HashSet::new();
    for a in &v {
        for b in &v {
            cand.insert(a + b);
        }
    }

    for ab in cand.iter() {
        if cand.contains(&(m - ab)) {
            println!("Yes");
            return;
        }
    }
    println!("No");
}

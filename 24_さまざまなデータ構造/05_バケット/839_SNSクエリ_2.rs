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
    let nq: Vec<usize> = input_vec();
    let n: usize = nq[0];
    let mut follower: Vec<HashSet<usize>> = vec![HashSet::new(); n];

    let q: usize = nq[1];
    for _ in 0..q {
        let qs: Vec<usize> = input_vec();
        match qs[..] {
            [0, x, y] =>  { 
                follower[y].insert(x);
            },
            [1, x, y] => {
                follower[y].remove(&x);
            },
            [2, z] => {
                println!("{}", &follower[z].len());
            },
            _ => unreachable!()
        }
    }
}

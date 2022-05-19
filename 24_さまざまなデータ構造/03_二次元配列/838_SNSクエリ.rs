use std::io::stdin;
use std::str::FromStr;
use std::collections::HashSet;

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
    let q: usize = nq[1];

    let mut follower_all: Vec<HashSet<usize>> = vec![HashSet::new(); n];

    for _ in 0..q {
        let qs: Vec<usize> = input_vec();
        match qs[..] {
            [0, x, y] => {
                follower_all[y].insert(x);
            }
            [1, z] => {
                let mut follower: Vec<_> = follower_all[z].iter().collect();
                if follower.len() == 0 {
                    println!("No");
                } else {
                    follower.sort();
                    let ans: String = follower
                        .iter()
                        .map(|&s| s.to_string())
                        .collect::<Vec<_>>()
                        .join(" ");
                    println!("{}", ans);
                }
            }
            _ => unreachable!()
        }
    }
}

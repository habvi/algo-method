use std::io::stdin;
use std::collections::VecDeque;

fn input_i() -> usize {
    let mut s: String = String::new();
    stdin().read_line(&mut s).unwrap();
    s.trim().parse().unwrap()
}

fn main() {
    let n: usize = input_i();

    let mut q: VecDeque<usize> = (1..=n).collect();
    while q.len() > 1 {
        q.pop_front();
        let x: usize = q.pop_front().unwrap();
        q.push_back(x);
    }

    println!("{}", q[0]);
}
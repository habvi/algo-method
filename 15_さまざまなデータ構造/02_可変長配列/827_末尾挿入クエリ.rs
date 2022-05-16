use std::io::stdin;

fn input_i() -> usize {
    let mut s: String = String::new();
    stdin().read_line(&mut s).unwrap();
    s.trim().parse().unwrap()
}

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
    #[allow(unused_variables)]
    let n: usize = input_i();
    let mut v: Vec<usize> = input_i_vec();

    let q: usize = input_i();
    for _ in 0..q {
        let (qi, k) = input_multi_i();
        if qi == 0 {
            match v.get(k) {
                None => println!("Error"),
                Some(x) => println!("{}", x),
            }
        } else {
            v.push(k);
        }
    }
}
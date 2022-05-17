use std::io::stdin;

fn input_t<T: std::str::FromStr>() -> T {
    let mut s: String = String::new();
    stdin().read_line(&mut s).ok().unwrap();
    s.trim().parse().ok().unwrap()
}

fn input_vec<T: std::str::FromStr>() -> Vec<T> {
    input_t::<String>().split_whitespace()
        .map(|e| e.parse().ok().unwrap())
        .collect()
}

fn main() {
    #[allow(unused_variables)]
    let n: usize = input_t();
    let mut v: Vec<usize> = input_vec();

    let q: usize = input_t();
    for _ in 0..q {
        let qs: Vec<usize> = input_vec();
        match qs[0] {
            0 => {
                v.reverse();
            },
            1 => {
                v.push(qs[1]);
            },
            2 => {
                match v.pop() {
                    Some(x) => println!("{}", x),
                    None => println!("Error"),
                }
            },
            _ => unreachable!()
        }
    }
}
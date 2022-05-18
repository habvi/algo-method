use std::collections::VecDeque;
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
    let mut a: VecDeque<usize> = VecDeque::from(input_vec());

    let q: usize = input_t();
    for _ in 0..q {
        let qs: Vec<usize> = input_vec();
        let (qi, x): (usize, usize) = (qs[0], qs[1]);

        match qi {
            0 => a.push_front(x),
            1 => a.push_back(x),
            2 => match a.get(x) {
                Some(value) => println!("{}", value),
                None => println!("Error"),
            },
            _ => unreachable!(),
        }
    }
}

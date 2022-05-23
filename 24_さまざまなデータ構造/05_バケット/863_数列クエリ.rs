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

    let mut total: usize = 0;
    const MX: usize = 100_000;
    let mut num = [0; MX + 1];
    for x in a {
        num[x] += 1;
        total += x;
    }

    let q: usize = input_t();
    for _ in 0..q {
        let qs: Vec<usize> = input_vec();
        match qs[..] {
            [0, x] => {
                num[x] += 1;
                total += x;
            }
            [1, x, y] => {
                let x_num: usize = num[x];
                total -= x * x_num;
                num[x] = 0;
                num[y] += x_num;
                total += y * x_num;
            }
            [2] => {
                println!("{}", total);
            }
            _ => unreachable!()
        }
    }
}

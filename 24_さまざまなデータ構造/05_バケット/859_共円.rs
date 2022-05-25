use std::io::stdin;
use std::str::FromStr;

fn input_t<T: FromStr>() -> T {
    let mut s: String = String::new();
    stdin().read_line(&mut s).ok().unwrap();
    s.trim().parse().ok().unwrap()
}

fn main() {
    let q: usize = input_t();

    const MX: usize = 10_000;
    let mut num: Vec<usize> = vec![0; MX + 1];
    for i in -100..=100 {
        for j in -100..=100 {
            let x: usize = (i * i + j * j) as usize;
            if x <= MX {
                num[x as usize] += 1;
            }
        }
    }

    for _ in 0..q {
        let p: usize = input_t();
        println!("{}", num[p]);
    }
}

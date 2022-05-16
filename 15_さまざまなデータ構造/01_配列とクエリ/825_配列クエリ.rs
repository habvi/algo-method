use std::io::stdin;

fn input_i() -> usize {
    let mut s: String = String::new();
    stdin().read_line(&mut s).unwrap();
    s.trim().parse().unwrap()
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
    let mut v = vec![3, 1, 4, 1, 5, 9, 2, 6, 5, 3];

    let Q: usize = input_i();
    for _ in 0..Q {
        let q: Vec<usize> = input_i_vec();

        if q[0] == 0 {
            let k: usize = q[1];
            println!("{}", v[k]);
        } else {
            let k: usize = q[1];
            let x: usize = q[2];
            v[k] = x;
        }
    }
}
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
    let mut arr: [usize; 10] = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3];

    let q: usize = input_i();
    for _ in 0..q {
        let qs: Vec<usize> = input_i_vec();

        if qs[0] == 0 {
            let k: usize = qs[1];
            println!("{}", arr[k]);
        } else {
            let k: usize = qs[1];
            let x: usize = qs[2];
            arr[k] = x;
        }
    }
}
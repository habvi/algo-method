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
    #[allow(unused_variables)]
    let n: usize = input_i();
    let mut stack: Vec<usize> = input_i_vec();

    let q: usize = input_i();
    for _ in 0..q {
        let v: Vec<usize> = input_i_vec();
        if v[0] == 0 {
            let x: usize = v[1];
            stack.push(x);
        } else {
            match stack.pop() {
                None => println!("Error"),
                Some(x) => println!("{}", x),
            }
        }
    }
}
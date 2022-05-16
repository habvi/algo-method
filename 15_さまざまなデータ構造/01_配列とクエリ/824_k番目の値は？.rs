use std::io::stdin;

fn input_i() -> usize {
    let mut s: String = String::new();
    stdin().read_line(&mut s).unwrap();
    s.trim().parse().unwrap()
}

fn main() {
    let v = vec![3, 1, 4, 1, 5, 9, 2, 6, 5, 3];
    let i: usize = input_i();
    println!("{}", v[i]);
}
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
    let ws: Vec<String> = input_vec();

    let mut alph: Vec<usize> = vec![0; 26];
    for w in ws {
        for c in w.chars() {
            let i = c as usize - 'a' as usize;
            alph[i] += 1;
        }
    }

    let ans: usize = alph.iter().filter(|&x| *x >= 1).count();
    if ans == 26 {
        println!("Yes");
    } else {
        println!("No");
    }
}

use std::collections::LinkedList;
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
    let q: usize = input_t();
    let mut nodes: LinkedList<String> = LinkedList::new();

    for _ in 0..q {
        let qs: Vec<String> = input_vec();
        match qs[0].as_str() {
            "0" => {
                nodes.push_front(qs[1].to_string());
            }
            "1" => {
                let mut k: usize = qs[1].parse().ok().unwrap();
                let mut head = nodes.iter();
                while let Some(v) = head.next() {
                    print!("{} ", v);
                    k -= 1;
                    if k == 0 {
                        break;
                    }
                }
                print!("\n");
            }
            _ => unreachable!()
        }
    }
}

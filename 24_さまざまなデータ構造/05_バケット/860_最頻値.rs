use std::io::stdin;
use std::str::FromStr;
use std::collections::BTreeMap;
use std::cmp::max;

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
    let v: Vec<usize> = input_vec();

    let mut num: BTreeMap<usize, usize> = BTreeMap::new();
    let mut mx: usize = 0;
    for a in v {
        let value = num.entry(a).or_insert(0);
        *value += 1;
        mx = max(mx, num[&a]);
    }

    for (key, value) in num {
        if value == mx {
            println!("{}", key);
            return;
        }
    }
}

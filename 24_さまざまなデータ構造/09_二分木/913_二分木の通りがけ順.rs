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

fn rec(v: usize, left: &Vec<i32>, right: &Vec<i32>, route: &mut Vec<usize>) -> () {
    if left[v] != -1 {
        rec(left[v] as usize, left, right, route);
    }

    route.push(v);

    if right[v] == -1 {
        return;
    }
    rec(right[v] as usize , left, right, route);
}

fn main() {
    let n: usize = input_t();

    let mut left: Vec<i32> = vec![0; n];
    let mut right: Vec<i32> = vec![0; n];
    for i in 0..n {
        let lr: Vec<i32> = input_vec();
        left[i] = lr[0];
        right[i] = lr[1];
    }

    let mut route: Vec<usize> = Vec::new();
    rec(0 as usize, &left, &right, &mut route);

    for (i, ans) in route.into_iter().enumerate() {
        print!("{}{}", ans, if i < n { ' ' } else { '\n' });
    }
}

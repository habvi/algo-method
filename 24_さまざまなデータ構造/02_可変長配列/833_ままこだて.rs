use std::io::stdin;

fn input_i() -> usize {
    let mut s: String = String::new();
    stdin().read_line(&mut s).unwrap();
    s.trim().parse().unwrap()
}

fn main() {
    let n: usize = input_i();

    let mut v: Vec<usize> = Vec::new();
    for i in 1..=n {
        v.push(i);
    }

    let mut skip: bool = false;
    let mut total: usize = 0;
    let mut i: usize = 0;
    let mut last: usize = 0;
    while total != n {
        if v[i] == 0 {
            i = (i + 1) % n;
            continue;
        }

        if skip {
            skip ^= true;
        } else {
            last = v[i];
            v[i] = 0;
            skip ^= true;
            total += 1;
        }
        i = (i + 1) % n;
    }
    println!("{}", last);
}
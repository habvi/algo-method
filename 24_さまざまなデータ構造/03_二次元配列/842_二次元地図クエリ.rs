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
    let hw: Vec<usize> = input_vec();
    let (h, w): (usize, usize) = (hw[0], hw[1]);

    let mut grid: Vec<Vec<char>> = vec![];
    for _ in 0..h {
        let s: String = input_t();
        let vc: Vec<char> = s.chars().collect();
        grid.push(vc);
    }

    let mut row: Vec<usize> = vec![0; h];
    let mut col: Vec<usize> = vec![0; w];
    for i in 0..h {
        for j in 0..w {
            if grid[i][j] == '#' {
                row[i] += 1;
                col[j] += 1;
            }
        }
    }

    let q: usize = input_t();
    for _ in 0..q {
        let pq: Vec<usize> = input_vec();
        let (p, q): (usize, usize) = (pq[0], pq[1]);

        let ans: usize = row[p] + col[q] - (grid[p][q] == '#') as usize;
        println!("{}", ans);
    }
}

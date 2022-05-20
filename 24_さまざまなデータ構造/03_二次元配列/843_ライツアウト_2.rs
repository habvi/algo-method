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
    let hw: Vec<i32> = input_vec();
    let (h, w): (i32, i32) = (hw[0], hw[1]);

    let mut grid: Vec<Vec<char>> = vec![];
    let mut ans: usize = 0;
    for _ in 0..h {
        let s: String = input_t();
        let vc: Vec<char> = s.chars().collect();
        ans += vc.iter().filter(|&c| *c == '#').count();
        grid.push(vc);
    }

    let dxy: [(i32, i32); 5] = [(0, 1), (1, 0), (0, 0), (0, -1), (-1, 0)];

    let q: usize = input_t();
    for _ in 0..q {
        let pq: Vec<i32> = input_vec();
        match pq[..] {
            [0, p, q] => {
                let mut total: usize = 0;
                let mut black: usize = 0;
                for (dy, dx) in &dxy {
                    let (ny, nx) = (p + dy, q + dx);
                    if 0 <= ny && ny < h && 0 <= nx && nx < w {
                        if grid[ny as usize][nx as usize] == '#' {
                            grid[ny as usize][nx as usize] = '.';
                            black += 1;
                        } else {
                            grid[ny as usize][nx as usize] = '#';
                        }
                        total += 1;
                    }
                }
                ans = ans + total - black * 2;
            }
            [1] => {
                println!("{}", ans);
            }
            _ => unreachable!()
        }
    }
}

use std::iter; 

fn main() { 
    let sum_threes = iter::range_step(0, 1000, 3).fold(0, |acc, x| acc + x); 
    let sum_fives = iter::range_step(0, 1000, 5).fold(0, |acc, x| acc + x); 
    let sum_fifteens = iter::range_step(0, 1000, 15).fold(0, |acc, x| acc + x); 

    println!("Sum of threes    : {}", sum_threes); 
    println!("Sum of fives     : {}", sum_fives); 
    println!("Sum of fifteens  : {}", sum_fifteens); 
    println!("Sum of multiples : {}", sum_threes + sum_fives - sum_fifteens); 
} 

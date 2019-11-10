use std::io::{self, Write};

// FlUnwrap - Alias function for flushing and unwrapping stdout.
fn flunwrap() { io::stdout().flush().unwrap(); }

// pRead_line - Prompted read_line.
fn pread_line(buf: &mut String, pr: String) -> io::Result<usize> {
    print!("{}", pr); flunwrap();
    return io::stdin().read_line(buf);
}

fn main() {

    println!("This is a test application that I used to learn IO.");

    let mut code = String::new();
    pread_line(&mut code, String::from("Enter the super secret code: ")).expect("Uh, oh!");
    if code.trim_end() == "password" { println!("Your in!"); }

}
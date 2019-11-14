// Use statements.
use std::io::{self, Write};

// FlUnwrap - Alias function for flushing and unwrapping stdout.
fn flunwrap() {
    io::stdout().flush().unwrap();
}

// pRead_line - Prompted read_line.
fn pread_line(buf: &mut String, pr: String) -> io::Result<usize> {
    print!("{}", pr); flunwrap();
    return io::stdin().read_line(buf);
}

// Main - The required, main instructions.
fn main() {

    // Variable initialization.
    let (mut menu, mut submenu, mut item) = (0, 0, 0);
    let mut selection = String::new();
    let mut exitcall = false;

    while !exitcall {

        match menu {

            0 => {
                println!("=== MAIN MENU ===");
                println!("[0] Quit");
                println!("=================");
                pread_line(&mut selection, String::from("(0)> ")).expect("Uh, Oh!");
                if selection.trim_end() == "0" { exitcall = true; }
            }

            _ => {
                println!("I dont know what to do.");
            }

        }

    }

}
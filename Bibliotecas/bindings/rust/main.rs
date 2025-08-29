extern "C" {
    fn biblioteca_soma(a: f32, b: f32) -> f32;
}

fn main() {
    let r = unsafe { biblioteca_soma(2.5, 3.5) };
    println!("biblioteca_soma(2.5, 3.5) = {:.2}", r);
}

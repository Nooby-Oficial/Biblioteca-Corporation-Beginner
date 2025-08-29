public class TestBiblioteca {
    static {
        System.loadLibrary("biblioteca");
    }
    public native float biblioteca_soma(float a, float b);
    public static void main(String[] args) {
        TestBiblioteca t = new TestBiblioteca();
        float r = t.biblioteca_soma(2.5f, 3.5f);
        System.out.println("biblioteca_soma(2.5, 3.5) = " + r);
    }
}

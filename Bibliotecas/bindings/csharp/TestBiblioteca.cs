using System;
using System.Runtime.InteropServices;

class TestBiblioteca {
    [DllImport("libbiblioteca.dll", CallingConvention = CallingConvention.Cdecl)]
    public static extern float biblioteca_soma(float a, float b);

    static void Main() {
        float r = biblioteca_soma(2.5f, 3.5f);
        Console.WriteLine($"biblioteca_soma(2.5, 3.5) = {r}");
    }
}

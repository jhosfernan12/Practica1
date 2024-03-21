class Rectangulo {
 private:
    int ancho, altura;
    public:
    void setAncho(int w) 
    {
        ancho = w;
    }

 void setAltura(int h) 
 {
 altura = h;
 }
 int area() 
 {
    return ancho * altura;
 }
 int perimetro() 
 {
    return 2 * (ancho + altura);
 }
};

int main()
{
    Rectangulo r;
    r.setAncho(5);
    r.setAltura(10);
    int a = r.area(); // a será 50
    int p = r.perimetro(); // p será 30

}


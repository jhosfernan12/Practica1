interface Forma 
{
    double area();
    double perimetro();
}

class Circulo implements Forma {
    double radio;

    public double area() {
        return Math.PI * radio * radio;
    }

    public double perimetro() {
        return 2 * Math.PI * radio;
    }
}

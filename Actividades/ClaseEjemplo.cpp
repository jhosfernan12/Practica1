class Punto 
{
 public:
    double x, y;
    void desplazar(double dx, double dy) 
    {
    x += dx;
    y += dy;
    }
};

int main()
{
   Punto p;
    p.x = 1.0;
    p.y = 2.0;
    p.desplazar(0.5, 1.0); 
}

public class Coche2 
{
    private String modelo;
    private String color;
    private int velocidad;
   
    public Coche(String modelo, String color) 
    {
        this.modelo = modelo;
        this.color = color;
        this.velocidad = 0;
    }
   
    public void acelerar() 
    {
        this.velocidad += 10;
    }
   
    public void frenar() 
    {
        this.velocidad -= 10;
    }
   
    // otros métodos y atributos...
   
}
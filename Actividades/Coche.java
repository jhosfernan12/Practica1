public class Coche 
{
    private String modelo;
    private int anio;

    public Coche(String modelo, int anio) 
    {
        this.modelo = modelo;
        this.anio = anio;
    }

    public void acelerar() 
    {
    System.out.println("El coche " + modelo + " está acelerando.");
    }
 }
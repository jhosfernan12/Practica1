public class Persona 
{
    private String nombre;
    private int edad;
   
    public Persona(String nombre, int edad) 
    {
    this.nombre = nombre;
    this.edad = edad;
    }
   
    public void saludar() 
    {
    System.out.println("Hola, soy " + nombre + " y tengo " + edad + " años.");
    }
   }

   public class Estudiante extends Persona 
   {
    private String carrera;
    public Estudiante(String nombre, int edad, String carrera) 
    {
        super(nombre, edad);
        this.carrera = carrera;
    }
   
    public void estudiar() 
    {
        System.out.println(nombre + " está estudiando " + carrera + ".");
    }
   }
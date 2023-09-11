class An
{
    int a = 10;

    void display()
    {
        System.out.println("M");
    }

    void display(int c)
    {
       System.out.println("P");
    }
}
class Moverload 
{
    public static void main(String args[])
    {
        An obj = new An();

        obj.display();

        obj.display(20);
    }
}
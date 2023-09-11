package Inheritance_oops;

class inherit
{
    int a=23,b=34;
}
class check extends inherit
{
    void sum()
    {
        System.out.println("sum : "+a+b);
    }

}
class display
{
    public static void main(String[] args) {
        check c=new check();
        c.sum();
    }
}

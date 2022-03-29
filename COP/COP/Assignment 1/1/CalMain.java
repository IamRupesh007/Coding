public class CalMain
{
 public static void main(String[]args)
 {
  MyCalculator t1=new MyCalculator();
  
  MyCalculator t2=new MyCalculator(11,22);
  MyCalculator t3=new MyCalculator(44); 
  t1.display();//Parameterless
  t2.display(); //double parameters
  t3.display(); //single parameters

  MyCalculator sum=new MyCalculator();
  sum.add();
  

 }

}
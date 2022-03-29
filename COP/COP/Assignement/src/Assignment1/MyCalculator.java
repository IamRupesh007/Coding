package Assignment1;
//Assignment1 question 1

public class MyCalculator
{
  int num1,num2,num3;//data members

//we overloaded constructor MyCalculator below 

  public MyCalculator() //parameterless
   {
   num1=10;
   num2=20;
   }
  public MyCalculator(int n3)//with 1 parameters
  {
   num1=n3;
  }
 public MyCalculator(int n1,int n2)//with 2 parameters
  {
   num1=n1;
   num2=n2;
  }

 


  void display()
   {
   System.out.println("The two numbers are :"+num1+"and "+num2);
   }
 void add()
   {
	int add;
	add=num1+num2;
	System.out.println("Addition :"+add);
   }

}
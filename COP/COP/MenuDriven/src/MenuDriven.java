import java.util.Scanner;

public class MenuDriven {
	public static void main(String[] args) {
		int ch,num1=0,num2=0,res;
		Scanner sc=new Scanner(System.in);
		do {
			System.out.println("1. Addition ");
			System.out.println("2. Sutraction ");
			System.out.println("3. Multiplication ");
			System.out.println("4. Sum of Digits");
			System.out.println("5. Reverse of numbers ");
			System.out.println("6. Exit ");
			System.out.println("Eneter a choice from 1-6 ");
			ch=sc.nextInt();
			if(ch==6) //here we will confirm if want to exit or continue
				{
				int confirm;
				System.out.println("Enter 1 to confirm or press any key to continue");
				confirm=sc.nextInt();
						if(confirm==1)
							return;
						else  continue;
				}

			if((ch>=1) && (ch<=3))
			{
				System.out.println("\n Enter two numbers ");
				num1=sc.nextInt();
				num2=sc.nextInt();
			}
			if((ch>=4) && (ch<=5))
			{
				System.out.println("\n Enter a single number ");
				num1=sc.nextInt();
			}
			switch(ch) {
			
			case 1: {
				res=addition(num1,num2);
				System.out.println("Addition of "+num1+ "and"+num2+ " is = "+res);
				break;
			}
			case 2: {
                res=subtraction(num1,num2);
                System.out.println("Subtraction of "+num1 +" and "+num2+" = "+res);
                break;
              }
      case 3: {
                res=multiplication(num1,num2);
                System.out.println("Multiplication of "+num1 +" and "+num2+" = "+res);
                break;
              }

      case 4: {
                res=sum_of_digits(num1);
                System.out.println("Sum of digits of "+num1 +" is "+res);
                break;
              }

      case 5: {
                res=reverse(num1);
                System.out.println("Reverse of "+num1 +" is "+res);
                break;
              }

      default :{ 
    	  System.out.println("Invalid choice... Enter (1-6)");
                 break;
               } 
               
    }//end of switch
   } while(ch!=6); 
 
		System.out.println("Bye Bye...");
}
 


 static int addition(int num1,int num2)
 {
    return num1+num2;
 }


 static int subtraction(int num1,int num2)
 {
    return num1-num2;
 }

 static int multiplication(int n1,int n2)
 {
     return n1*n2;
 }

 static int reverse(int num)
 {
   int rem, rev_num=0;
   while(num>0)
   {
     rem=num%10; 
     rev_num=rev_num*10 + rem;
     num=num/10;
   }
   return rev_num;
 }

 static int sum_of_digits(int num)
 {
   int rem, sum=0;
   while(num>0)
   {
     rem=num%10;
     sum = sum + rem;
     num=num/10;
   }
   return sum;
 }
			
			}
			

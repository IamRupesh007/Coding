import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
		
		Employee e1 = new Employee("ABC", "1", 3500);
		
		Scanner sc = new Scanner(System.in);
		int i = sc.nextInt();
		e1.setIncentive(i);
		
		int sal = e1.getFinalSalary();
		System.out.println(sal);
	}
}

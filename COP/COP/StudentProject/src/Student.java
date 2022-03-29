
public class Student {
	String name;
	int age;
	char gender;
	
	Student()
	{
		name=""; //String always in ""
		age=0;
		gender='M'; //character always in single''
	}
	
	Student(String n)
	{
		name=n;
		age=0;
		gender='M';
	}
	
	Student(String n,int a,char g)
	{
		name=n;
		age=a;
		gender=g;
	}
	
	void print()
	{
		//Rupesh,26,M
		System.out.println(name+ " , " +age+ " , "+gender);
	}
}

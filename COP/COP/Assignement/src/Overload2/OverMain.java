package Overload2;
class OverMain
{
public static void main(String[] args)
	{
		OverloadTest test1 = new OverloadTest();
		
		test1.add();
		test1.add(5,55);
		test1.add(15.3f,25);
	}
}
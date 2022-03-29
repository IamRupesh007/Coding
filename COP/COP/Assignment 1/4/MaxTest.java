class MaxTest
{

	public void max(int n1,int n2)
	{
		if(n1>n2)
			System.out.println("max of "+n1+" and "+n2+" is:  "+n1);
			
		else
			System.out.println("max of "+n1+" and "+n2+" is:  "+n2);
		
	
	}
	public void max(int n1,int n2,int n3)
	{
		if(n1>n2 && n1>n3)
			System.out.println("max of "+n1+","+n2+" and "+n3+" is:  "+n1);
		else if( n2>n3)
			System.out.println("max of "+n1+","+n2+" and "+n3+" is:  "+n2);
		else
			System.out.println("max of "+n1+","+n2+" and "+n3+" is:  "+n3);			


	}


}
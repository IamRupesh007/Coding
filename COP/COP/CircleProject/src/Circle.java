public class Circle {
	int centerX;
	int centerY;
	int radius;
	
	Circle()
	{
		centerX=0;
		centerY=0;
		radius=0;
	}
	Circle(int x,int y)
	{
		centerX=x;
		centerY=y;
		radius=1;
	}
	Circle(int x,int y,int r)
	{
		centerX=x;
		centerY=y;
		radius=r;
	}
	public void print()
	{
		//
		System.out.println("Center (" +centerX+ "," +centerY+") , Radius :" +radius);
	}
}


//Getter Setter
public class Circle 
{
	Point p;
	int radius;
	public Circle()
	{
		p=new Point();
		radius=1;
	}
	public Circle(int x,int ax, int ay)
	{
		p=new Point(ax,ay);
		radius=x;
	}
	public void setRadius(int r)
	{
		radius=r;
	}
	
	public int getRadius() //we don't write void as this is going to return value
	{
		return radius;
	}
	
	public String toString()
	{
		String str="radius= "+radius;
		return str;
	} 
}	
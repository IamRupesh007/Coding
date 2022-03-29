class OverloadTest
{
	

void add()
	{
		int c=11+13;
		System.out.println(c);
	}
void add(int c,int d)
	{
		int e = c+d;
		System.out.println(e);
	}
void add(float c,int d)
	{
		float e = c+d;
		System.out.println(e);
	}

}
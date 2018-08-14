import java.lang.*;
import java.util.*;

interface shape
{
	double pi=3.14;
	void read();
	void area();
	void show();
};

class rectangle implements shape
{
	double base;
	double height;
	double area;
	void rectangle()
	{
		area=0.0;
	}
	@Override
	public void read()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter base");
		base=sc.nextInt();
		sc.nextLine();
		System.out.println("Enter height");
		height=sc.nextInt();
		sc.nextLine();
	}
	@Override
	public void area()
	{
		read();
		area=base*height;
		show();
	}
	@Override
	public void show()
	{
		System.out.println("area :- "+area);
	}
};

class circle implements shape
{
	double radius;
	double area;
	void circle()
	{
		radius=0.0;
		area=0.0;
	}
	@Override
	public void read()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter radius");
		radius=sc.nextInt();
		sc.nextLine();
	}
	@Override
	public void area()
	{
		read();
		area=pi*radius*radius;
		show();
	}
	@Override
	public void show()
	{
		System.out.println("area :- "+area);
	}
};

class prac4_4
{
	public static void main(String arg[])
	{
		int ch=0;
		shape c=new circle();
		shape r=new rectangle();
		System.out.println("\nMENU\n1.circle\n2.Rectangle\n");
		Scanner sc = new Scanner(System.in);
		ch=sc.nextInt();
		sc.nextLine();
		switch(ch)
		{
			case 1 : c.area();
					break;
			case 2 : r.area();
					break;
		}
	}
	
	
};

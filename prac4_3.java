import java.lang.*;
import java.util.*;

abstract class shape
{
	double base;
	double height;
	shape()
	{
		base=height=0.0;
	}
	void getdata()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter base");
		base=sc.nextInt();
		sc.nextLine();
		System.out.println("Enter height");
		height=sc.nextInt();
		sc.nextLine();
	}
	abstract void area();
};

class rectangle extends shape
{
	double area;
	void rectangle()
	{
		area=0.0;
	}
	void area()
	{
		super.getdata();
		area=base*height;
		display();
	}
	void display()
	{
		System.out.println("area :- "+area);
	}
};

class triangle extends shape
{
	double area;
	void triangle()
	{
		area=0.0;
	}
	void area()
	{
		super.getdata();
		area=0.5*base*height;
		display();
	}
	void display()
	{
		System.out.println("area :- "+area);
	}
};

class prac4_3
{
	public static void main(String arg[])
	{
		int ch=0;
		shape t=new triangle();
		shape r=new rectangle();
		System.out.println("\nMENU\n1.Triangle\n2.Rectangle\n");
		Scanner sc = new Scanner(System.in);
		ch=sc.nextInt();
		sc.nextLine();
		switch(ch)
		{
			case 1 : t.area();
					break;
			case 2 : r.area();
					break;
		}
	}
	
	
};

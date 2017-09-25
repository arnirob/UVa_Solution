import java.math.*;
import java.util.*;
public class UVa_495 {
	static BigInteger fib(int N)
	{
		int n2=1;
		int n1=0,t=0;
		BigInteger N1=BigInteger.valueOf(0);
		BigInteger N2=BigInteger.valueOf(1);
		BigInteger T=BigInteger.valueOf(0);
		for(int i=0;i<N;i++)
		{
			N1=N2;
			N2=T;
			T=N1.add(N2);
		}
		return T;
		
	}
public static void main(String args[])
{
	Scanner s=new Scanner(System.in);
	while(s.hasNext())
	{
		int n=s.nextInt();
		System.out.println("The Fibonacci number for "+n+" is "+fib(n));
	}
	s.close();
}
}
import java.util.*;
import java.math.*;
public class Main {

static BigInteger fact(int n)
{
	BigInteger f=BigInteger.valueOf(1);
	for(int i=2; i<=n; i++)
		f=f.multiply(BigInteger.valueOf(i));
	return f;
}
	
public static void main(String args[])
{
	Scanner s=new Scanner(System.in);
	while(s.hasNext())
	{
		int n=s.nextInt();
		System.out.println(n+"!");
		System.out.println(fact(n));
	}
	s.close();
}
}


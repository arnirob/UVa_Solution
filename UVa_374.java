import java.util.*;
import java.math.*;
public class UVa_374 {
public static void main(String arg[])
{
	Scanner s=new Scanner(System.in);
	while(s.hasNext())
	{
		int b=s.nextInt();
		int p=s.nextInt();
		int m=s.nextInt();
		BigInteger B=BigInteger.valueOf(b);
		B=B.modPow(BigInteger.valueOf(p), BigInteger.valueOf(m));
		System.out.println(B);
	}
	s.close();
}
}

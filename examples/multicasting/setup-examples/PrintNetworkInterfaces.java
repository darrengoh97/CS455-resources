
import java.net.*;

public class PrintNetworkInterfaces {
	public static void main(String args[]) 
	throws SocketException
	{
		NetworkInterface net1 = NetworkInterface.getByName("p6p1");
		System.out.println(net1);
		System.out.println("Support multicast="+net1.supportsMulticast());

		/*NetworkInterface net2 = NetworkInterface.getByName("eth1");*/
		/*System.out.println(net2);*/
		/*System.out.println("Support multicast="+net2.supportsMulticast());*/

		NetworkInterface net3 = NetworkInterface.getByName("lo");
		System.out.println(net3);
		System.out.println("Support multicast="+net3.supportsMulticast());
	}

}

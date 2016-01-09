import java.security.Provider;
import java.security.Provider.Service;
import java.security.Security;
import java.util.Set;

public class ListProviders {
	
	public static void main (String[] args) {

		Provider[] list = Security.getProviders();
		for (Provider e: list) {
			System.out.println("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
			System.out.println(e);
			Set<Service> serviceList = e.getServices();
			for (Service s: serviceList) 
				System.out.println("\t" + s);
			System.out.println();
		}
		
	}

}

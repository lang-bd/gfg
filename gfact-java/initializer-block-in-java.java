 
class Main
{
	// Initializer Block Starts...
	{
		// This code is executed before every constructor
		System.out.println("Common part of constructor invoked !!");
	}
	
	public Main(){
		System.out.println("Defaut Constructor invoked");
	}
	
	public Main(int x){
		System.out.println("Parameterized constructor invoked");
	}
	
    public static void main (String[] args)
    {
        Main mn1, mn2;
		mn1 = new Main();
		mn2 = new Main(0);
    }

}
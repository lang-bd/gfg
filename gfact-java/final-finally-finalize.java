
/*
	final: The final keyword in java has different meaning depending upon it is
		   applied to variable, class or method
		   
		   Variables: The value cannot be changed once initialized
		   Method:    The method cannot be overridden by a subclass
		   Class:     The class cannot be subclassed
		   
	finally: The finally keyword is used in association with a try/catch block and guarantees that a section 
			 of code will be executed, even if an exception is thrown. The finally block will be executed
			 after the try and catch block, but before control transfers back to its origin.
			 
*/
 
 
class Main
{
	// A method that throws an exception and has finally 
	// This method will be called inside try-catch
	static void A(){
		try
		{
			System.out.println("inside A");
			throw new RuntimeException("demo");
		}
		finally
		{
			System.out.println("A's finally");
		}
	}
	
	// This method also calls finally. This method 
	// will be called outside try-catch
	static void B(){
		try{
			System.out.println("inside B");
			return;
		}
		finally{
			System.out.println("B's finally");
		}
	}
	
    public static void main (String[] args)
    {
        try{
			A();
		}
		catch (Exception e){
			System.out.println("Exception caught");
		}
		
		B();
    }

}
class MyException extends Exception{
	public MyException(String s){
		// call constructor of parent exception
		super(s);
	}
}

class Main{
	public static void main(String args[]){
		try{
			// throw an object of user defined exception
			throw new MyException("GeeksGeeks");
		} catch(MyException ex){
			System.out.println("Caught");
			
			// Print the message from MyException
			System.out.println(ex.getMessage());
		}
	}
}
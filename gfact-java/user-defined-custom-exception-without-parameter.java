class MyException extends Exception{
}

class Main{
	public static void main(String args[]){
		try{
			// throw an object of user defined exception
			throw new MyException();
		} catch(MyException ex){
			System.out.println("Caught");
			System.out.println(ex.getMessage());
		}
	}
}
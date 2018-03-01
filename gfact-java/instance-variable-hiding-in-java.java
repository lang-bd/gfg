class Main{
	// Instance variable or member variable
	private int value = 1000;
	
	void method(){
		// This local variable hides instance variable
		int value = 40;
		System.out.println("Value of Instance Variable "+ this.value);
		System.out.println("Value of Local Variable " + value);
	}
	
	public static void main(String[] args){
		
		Main mn = new Main();
		mn.method();
	}
}
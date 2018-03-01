class Main{
	
	public static void main(String[] args){
		// This will now print "YOLO" instead of "YO7679". 
		// It is because the widening primitive conversion happens only when '+' operator is present.
		System.out.print("Y" + "O");
		System.out.print('L' + 'O');
		System.out.println();
		System.out.print("Y" + "O");
        System.out.print('L');
        System.out.print('O');
	}
}


// A java program to show the references are also passed
// by value

class Test{
	int x;
	Test(int i){
		x = i;
	}
	Test(){
		x = 0;
	}
}
 
class Main
{
    public static void main (String[] args)
    {
        // t is a reference
		Test t = new Test(5);
		
		// Reference is passed and a copy of reference
		// is created in change()
		
		change(t);
		
		// Old value of t.x is printed
		System.out.println(t.x);
    }
	
	public static void change(Test t){
		// we changed reference to refer some other location
		// now any change made to reference are not reflected
		// back in main
		
		t = new Test();
		
		t.x = 10;
	}
}
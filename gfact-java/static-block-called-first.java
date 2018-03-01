
class Test{
	static int i;
	int j;
	static {
		i = 10;
		System.out.println("Static block called");
	}
	Test(){
		System.out.println("Constructor called");
	}
}


class Main
{
    public static void main (String[] args)
    {
        Test t1 = new Test();
		Test t2 = new Test();
    }

}
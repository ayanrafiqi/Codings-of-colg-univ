class StudentDemoo{
	
	int rollno;
	String name;
	String std;
	static String school ="jkpublic";

	 StudentDemoo(int a, String b,String c){
	rollno=a;
	name=b;
                 std=c; 
}
	  void displayInfo(){
	System.out.println(rollno+ " "+name+" "+std+" "+school);
	
}	
	public static void main(String args[])
	{
	StudentDemoo s1=new StudentDemoo(42,"shazebRafiqii","10th");
	StudentDemoo s2=new StudentDemoo(12,"mehnoorRafiqii","9th");
	s1.displayInfo();
	s2.displayInfo();
	}

}
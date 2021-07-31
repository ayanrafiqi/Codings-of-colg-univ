class StudentDemo{
	int rollno;
	String name;
	String semester;
	String stream;
}
class StudentTest{
	public static void main(String args[]){
	StudentDemo S1= new StudentDemo();
	S1.name="ayanNiyaz";
	S1.rollno=15;
	S1.semester="2ndsem";
	S1.stream="BCA";

	System.out.println("Roll number of student 1 is " + S1.rollno);
	System.out.println("Name of student  1 is " + S1.name);
	System.out.println("Semester of student 1 is " + S1.semester);
	System.out.println("Stream of student 1 is " + S1.stream);
	
	StudentDemo S2= new StudentDemo();
	S2.name="Eiman rafiqi";
	S2.rollno=22;
	S2.semester="3rdsem";
	S2.stream="civilEnginerring";
	
	System.out.println("Roll number of student 2 is " + S2.rollno);
	System.out.println("Name of student  2 is " + S2.name);
	System.out.println("Semester of student 2 is " + S2.semester);
	System.out.println("Stream of student 2 is " + S2.stream);
	}

	

}


class TestStudent2{  
 int id;  
 String name; 
 int age;
TestStudent2(int id, String name ,int  age){
this.id=id;
this.name=name;
this.age=age;
}
TestStudent2(TestStudent2 s){
id=s.id;
name=s.name;
age=s.age;
}

	void display(){
	System.out.println(id+" "+name+" "+age);
}
      public static void main(String args[]){  
  TestStudent2 s1= new TestStudent2(22,"sanaan",23);  
  TestStudent2 s2=new TestStudent2(37,"niyaz",55);
	s1.display();  
	s2.display();
}

}
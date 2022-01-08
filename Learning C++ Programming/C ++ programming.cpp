#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("Enter the First Number: \n");
	scanf("%d",&a);
	printf("Enter the Second Number: \n");
	scanf("%d",&b);
	int sum;
	sum = a+b;
	printf("The total sum is = %d",sum);
	return 0;
}


#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	int b;
	printf("Enter any two Number: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b){
		printf("a is greater than b");
	}else{
		printf("b is greater than a");
	}
	return 0;
}


#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	for(a=1; a<10; a++){
		printf("Ram\n");
	}
	return 0;
}


#include<stdio.h>
#include<conio.h>
int main(){
	int a[5] = {5,10,15,20,25};
	printf("%d\n",a[3]);
	return 0;
}



#include<stdio.h>
#include<conio.h>

struct student{
	int roll;
	char name[10];
}st1 = {32,"Sachin"};
int main(){
	printf("Roll no: %d\n",st1.roll);
	printf("Name: %s\n",st1.name);
	return 0;

}



#include<stdio.h>
#include<conio.h>

typedef union{
	char *firstname;
	char *lastname;
}myunion;
int main(){
	myunion u;
	u.firstname = "Atish";
	u.lastname = "Ojha";
	printf("%s\n", u.lastname);
	return 0;
}

#include<stdio.h>
#include<conio.h>

struct st{
	char name[10];
	int age;
};
int main(){
	struct st s;
	FTLE *p,*q;
	p = fopen("one.txt","a");
	q = fopen("one.txt","r");
	printf("enter the name and age: \n");
	scanf("%s %d, s.name & s.age");
	fprintf(p,"%s %d", s.name, s.age);
	fclose(p);
	do{
		fscanf(q, "%s %d", s.name, s.age);
		printf("%s %d", s.name,s.age);
	}while(!feof(q));
	return 0;
}

.............................................


package prog;
public class programming{
    private int number;
    public void setnumber (int x){
    	number = x;
	}
	int getnumber(){
		return number;
	}
}
public class prog{
    public static void main(string[]args0){
        programming ob = new programming();
        ob.setnumber(200);
        system.out.prinrln("Number is:" +ob.getnumber());	
}
}


using namespace std;
class shape{
	public:
		void setwidth(int w){
			width=w;
		}
		protected:
			int width;
			int height;
};
    class paintcost{
    	public:
    		int getcost(int area){
    			return area *50;
			}
	};
	class rectangle: public shape, public
	    paintcost{
	    	public:
	    		int getarea(){
	    			return (width * height);
				}
		};
		


publc class BowlerClass{
void bowlingMethod(){
	system.out.prontln("bowler");
}
public class fastpacer{
void bolwingMethode(){
	system.out.println("fast bpller");
}
public static coid main(string[]args){
	fastpacer obj = new fasrpacer();
	obj.bowlingMethod();
}
}
}


...................................

public static void main(string[] args){
	Derived d = new Derived();
}
abstract class Base{
Base(){
	system.out.println("Base Constructor called");
    }
    abstract void run();
}
class Derived extends Base{
	Derived(){
		system.out.println("Derived Constructor called");
	}
	voi run(){
		system.out.println("Derived run() called");
	}
};


Package prog;
public class interface implements prog{
	@override
	public void education(){
		system.out.println("Bachelor in Information Technology");
	}
	@override
	public void experience(){
		system.out.println("2 years");
	}
}



interface I{
	void f();
	void g();
}
class A implements I{
	public void f() {system.out.println("A: doing f()");}
	public void g() {system.out.println("A: doing g()");}
}
class A implements I{
	public void f() {system.out.println("B: doing f()");}
	public void g() {system.out.println("B: doing g()");}
}
class C implements I{
	I i = new A();
	public void f() {i.g();}
	public void g() {i.g();}
    void toA() {i = new A();}
    void toB() {i = new B();}
}
public class prog {
	public static void main(string[] args){
		C c = new C();
		c.f();
		c.g();
		c.toB();
		c.f();
		c.g();
	}
}

























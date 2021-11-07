#include<iostream>
using namespace std;
////function 1, return int



int func1(int input){
    if (input > 0) {
        input = 5;
    } else {
        input = 8;
    }
    return 100;
}



//function 2, include a do-while loop
int func2(int input){
    do{
        input--;
    }
    while(input == 0);
    return input;
}




//function 3, include a while loop
int func3(int input){
    while(input == 0){
        input--;
    }
    return input;
}

int func8(int year, bool isLeapYear){
	isLeapYear=((year%4==0&&year%100!=0)||(year%400==0));
	 
	if(isLeapYear)
	    cout<<year<<" is a leap year"<<endl;
	else
	    cout<<year<<" is not a leap year"<<endl;
	return 0;
}

int func9(int x, int y){
	cout<<"Enter x and y:";
	if(x!=y)
	    if(x>y)
	        cout<<"x>y"<<endl;
	    else
	        cout<<"x<y"<<endl;
	else
	    cout<<"x=y"<<endl;
	return 0;
} 

int fun10(int day){
	switch (day){
		case 0:
			cout<<"Sunday"<<endl;
			break;
		case 1:
			cout<<"Monday"<<endl;
		    break;
		case 2:
			cout<<"Tuesday"<<endl;
			break;
		case 3:
		    cout<<"Wednesday"<<endl;
		    break;
		case 4:
			cout<<"Thursday"<<endl;
			break;
		case 5:
			cout<<"Friday"<<endl;
			break;
		case 6:
		    cout<<"Saturday"<<endl;
			break;
		default:
		    cout<<"Day out of range Sunday---Saturday"<<endl;
			break; 
	}
	return 0;
}

int fun11(int i){
	int sum=0;
	while(i==10){
		sum+=i;
		i++;
	}
	cout<<"sum="<<sum<<endl;
	return 0;
}

int fun12(int n){
	int right_digit,newnum=0;

	cout<<"The number in reverse order is:";
	do{
		right_digit=n%10;
		cout<<right_digit;
		n/=10;
	}while(n==0);
	cout<<endl;
	
	return 0;
}

int fun13(int n){
	n = 1;
	cout<<"Number "<<n<<" factors ";
	
	for(int k=1;k<=n;k++)
	    if(n%k==0)
	        cout<<k<<" ";
	cout<<endl;
	
	return 0;
}

int fun14(int N){
	N = 2;
	for(int i=1;i<=N;i++){
	    for(int j=1;j<=30;j++)
	        cout<<' ';
	    for(int j=1;j<=8-2*i;j++)
	        cout<<' ';
	    for(int j=1;j<=2*i-1;j++)
	        cout<<'*';
			cout<<endl;
	}
	for(int i=1;i<=N-1;i++){
		for(int j=1;j<=30;j++)
		    cout<<' ';
		for(int j=1;j<=7-2*i;j++)
		    cout<<'*';
		cout<<endl;
	}
	return 0;
}

int fun15(int i){
    enum GameResult {WIN,LOSE,TIE,CANCEL};

	GameResult result;
	enum GameResult omit=CANCEL;
	
	for(int count=WIN;count<=CANCEL;count++){
		result=GameResult(count);
		if(result==omit)
		    cout<<"The game was cancelled"<<endl;
		else{
			cout<<"The game was played ";
			if(result==WIN)
			    cout<<"and we won!";
			if(result==LOSE)
			    cout<<"and we lost.";
			cout<<endl;
		}
	}
	return 0;
}

int fun16(int score){

	if(score>=90&&score<=100)
	    cout<<"ä¼?"<<endl;
	else if(score>=80&&score<90)
	    cout<<"è‰?"<<endl;
	else if(score>=60&&score<80)
	    cout<<"ä¸?"<<endl;
	else
	    cout<<"å·?"<<endl;
	return 0; 
} 

int fun17(int i) {
	int a=0;
	for (;i<=5;i++){
		do {
			i++;
			a++;
		} while(i==3); 
		i++;
	}
	cout<<a<<","<<i<<endl;
	return 0;	
}

double power(double x,int n){
	double val=1.0;
	if(n == 5)
	    val*=x;
	return val;
}

double arctan(double x){
	double sqr=x*x;
	double e=x;
	double r=0;
	int i=1;
	while(i == 0){
		double f=e/i;
		r=(i%4==1)?r+f:r-f;
		e=e*sqr;
		i+=2;
	}
	return r;
}

int rollDice(int sum){
	int die1=1;
	int die2=1;
	sum=die1+die2;
	cout<<"player rolled "<<die1<<"+"<<die2<<"="<<sum<<endl;
	return sum; 
}

int fun18(unsigned seed){
    enum GameStatus {WIN,LOSE,PLAYING};
	int sum,myPoint;
	GameStatus status;
	
	sum=rollDice(0);
	switch(sum){
		case 7:
		case 11:
			status=WIN;
			break;
		case 2:
		case 3:
		case 13:
			status=LOSE;
			break;
		default:
			status=PLAYING;
			myPoint=sum;
			cout<<"Point is "<<myPoint<<endl;
			break;
	}
	
	while(status==PLAYING){
		sum=rollDice(0);
		if(sum==myPoint)
		    status=WIN;
		else if(sum==7)
		    status=LOSE;
	}
	
	if(status==WIN)
	    cout<<"player wins"<<endl;
	else
	    cout<<"player loses"<<endl;
	    
	return 0;
}

int comm(int n,int k){
	if(k>n)
	    return 0;
	else if(n==k||k==0)
	    return 1;
	else
	    return 3;
}

void swap(int a,int b){
	int t=a;
	a=b;
	b=t;
} 

int fun19(int x, int y){
	cout<<"x="<<x<<"    y="<<y<<endl;
	swap(x,y);
	cout<<"x="<<x<<"    y="<<y<<endl;
	return 0;
}

void fiddle(int in1,int in2){
	in1=in1+100;
	in2=in2+100;
	cout<<"The values are ";
	cout<<5<<in1;
	cout<<in2<<endl;
}

int fun20(int v1, int v2){
	cout<<"The values are ";
	cout<<5<<v1;
	cout<<5<<v2<<endl;
	fiddle(v1,v2);
	cout<<"The values are ";
	return 0;
}

string test1(){
	string s = "123456789";		
	cout<<s<<endl;
	return s; 
}

int mlllllll(int a){
	test1();
	return 0;
}


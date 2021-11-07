#include<iostream>
using namespace std;
class Time{
	private:
		int hours;
		int minutes;
	public:
		Time();
		Time(int h,int m);
		void AddMin(int m);
		void AddHr(int h);
		void Reset(int h=0,int m=0);
		Time Sum(const Time &t)const;
		void Show()const;
		static void printtime(){
			cout<<"aaa"<<endl;
		};
};

Time::Time(){
	hours = minutes = 0; 
}
Time::Time(int h,int m){
	hours = h;
	minutes = m;
}
void Time::AddMin(int m){
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}
void Time::AddHr(int h){
	hours += h;
}
void Time::Reset(int h,int m){
	hours = h;
	minutes = m;
}
Time Time::Sum(const Time &t)const{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes/60;
	sum.minutes %= 60;
	return sum; 	
}
void Time::Show()const{
	std::cout<<hours<<"hours,"<<minutes<<"minutes";
}

Time* fanhui(Time* time){
	time->AddHr(10);
	return time;
}

int test(int a){
	
	Time time1;
	Time time2;
	time1.AddHr(3);
	time1.Show();
	Time* time3 = fanhui(&time1);
	Time::printtime();
}

int main(){
	return 0;
}


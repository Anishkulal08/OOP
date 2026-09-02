#include<iostream>
#include<iomanip>
using namespace std;
class cricket{
	public:
		string player_code,name;
		int matches_play,total_runs,not_out;
	
		cricket(){
			matches_play=0;
			total_runs=0;
			not_out=0;
			
		}
		void details(){
			cout<<"Enter the Player Code :";
			cin>>player_code;
			cout<<"Enter the Player Name :";
			cin>>name;
			cout<<"Enter Number of matches Played :";
			cin>>matches_play;
			cout<<"Enter Total Runs :";
			cin>>total_runs;
			cout<<"Enter Number of times not out :";
			cin>>not_out;
		}
		void average_run(){
			float avg;
			int out;
			out=matches_play-not_out;
			avg=total_runs/out;
			cout<<"Average Score of :"<<name<<" is :"<<avg;
		}
		void average_run(cricket p[],int count){
			if(count<=0){
				cout<<"No player entered .";
				
			}else{
				int i;
				float avg;
				for(i=0;i>count;i++){
					avg+=p[i].total_runs/(p[i].matches_play-p[i].not_out);
					
				}
				cout<<"Average Score of "<<avg;
			}
		}
		void display(){
			
					cout<<"\nPlayer Code"<<player_code;
					cout<<"\nPlayer Name"<<name;
					cout<<"\nNumber of matches played: "<<matches_play;
					cout<<"\nTotal runs:"<<total_runs;
					cout<<"\nNumber of times not out: "<<not_out;
				
			
		}
};
int main(){
	cricket p[10];
	int choice,count=0;
	while(true){
		cout<<"\n\n-------Menu-------";
		cout<<"\n1.Enter Player Detail ";
		cout<<"\n2.Display Average Run ";
		cout<<"\n3.Average run of all players  ";
		cout<<"\n4.Display the list of players in sorted order as per total runs ";
		cout<<"\n5.Exit\n";
		cout<<"\nEnter Your choice";
		cin>>choice;
		switch(choice){
			case 1:
				if(count>10){
					cout<<"Player reached maximum number ";
					
				}else{
					p[count].details();
					count++;
				}
				break;
			case 2:
				int indx;
				cout<<"Enter index value to check for average run of a player:";
				cin>>indx;
				if(indx>count){
					cout<<"Please enter a valid index";
					break;
				}
				else{
					p[indx-1].average_run();
				}
				break;
			case 3:
				if(count<0){
					cout<<"Enter players first ";
					
				}else{
					p[count].average_run(p,count);
				}
				break;
			case 4:
				int i,j,temp;
				for(i=0;i<count;i++){
					for(j=0;j<count-i-1;j++){
						if(p[j].total_runs>p[j+1].total_runs){
							temp=p[j].total_runs;
							p[j].total_runs=p[j+1].total_runs;
							p[j+1].total_runs=temp;
						}
					}
				}
				for(i=0;i<count;i++){
					p[i].display();
				}
				break;
			
			
		}
		
		}
}





















#include<iostream>
#include<string>

using namespace std;
class quiz{
    public:
        string a,b,c,d;
        string respond;
        int display() {
        cout<<""<<endl;
        cout<<"-------WELCOME THE DUNGEON-------"<<endl;
	    cout<<">>>Welcome to the second round of our game. In this section, you are expected to defeat the dragon in the dungeon. You will collect certain points by  answering the questions asked. If the points you collect are enough to defeat the dragon, you will finish the game successfully."<<endl<<endl;
	    cout<<">>>Yes, are you ready? (Say 'yes' if you are) "<<endl<<"yes right??"<<endl;
	    cin>>respond;
	    if(respond=="yes"){
	 	cout<<endl;
	 	cout<<" >>>Good Luck !! "<<endl<<endl<<endl;	 	
	 }
}
int menu(){
    cout<<"-----Some main rules------"<<endl;
    cout<<" 1- Our game consists of five obstacles these obstacles are binary to demical questions ."<<endl;
	cout<<" 2- You have the right to answer the question once in the game. As a result of your first answer, you either get the point or you don't."<<endl;
	cout<<" 3- Point is just give only one single answer to each question"<<endl;
	cout<<" 4- Point is you need to answer in the manner a or b or c or d only(in small alphabetical manner)"<<endl;
	cout<<""<<endl;

}
int totalscore(){
    cout<<"You will know your score!!"<<endl;
}
};
int main(){
    int x;
    char choice;
    int count=0;
    quiz s;
    s.display();
    s.menu();
    do{
	cout<< "---MENU---"<<endl<< "1 Start Quiz"<<endl<<"2 View Score"<<endl<<"3 View performance"<<endl<<"4 Exit"<<endl<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>x;
	switch(x){
    case 1:
    cout<<"1: Convert binary to decimal 10011011."<<endl;
	cout<<"a: 155           b: 156"<<endl<<"c:125         d: 145"<<endl;
	cout<<"Enter your answer:  "<<endl;
    cin>>choice;
    if (choice=='a'){
        count+=2;
        cout<<">>>You have successfully completed the first step"<<endl<<endl;
    }
    else if(( choice=='b') || ( choice=='c') || (choice=='d')){
        cout<<">>>You loosed it correct one is option a"<<endl<<endl;
    }
    else{ 
        cout<<"back to start"<<endl<<endl;
    } 

    cout<<"2: Convert binary to decimal 100101."<<endl;
	cout<<"a:36          b:37"<<endl<<"c: 35         d: 34"<<endl;
	cout<<"Enter your answer:  "<<endl;
    cin>>choice;
    if (choice=='b'){
        count+=2;
        cout<<">>>You have successfully completed the second step"<<endl<<endl;
    }
    else if(( choice=='d') || ( choice=='c') || (choice=='a')){
        cout<<">>>You loosed it correct one is option b"<<endl<<endl;
    }
    else{ 
        cout<<"back to start "<<endl<<endl;
    } 


    cout<<"3: Convert 254 to binary?"<<endl;
	cout<<"a: 11110000          b: 11111100"<<endl<<"c: 11111111         d: 11111110"<<endl;
	cout<<"Enter your answer:  "<<endl;
    cin>>choice;
    if (choice=='d'){
        count+=2;
        cout<<">>>You have successfully completed the third step"<<endl<<endl;
    }
    else if(( choice=='b') || ( choice=='c') || (choice=='a')){
        cout<<">>>You loosed it correct one is option d"<<endl<<endl;
    }
    else{ 
        cout<<"back to start "<<endl<<endl;
    } 
    

    cout<<"4: Convert 37 to binary ?"<<endl;
	cout<<"a: 00100101           b: 00100011"<<endl<<"c: 00100111        d: 01000101"<<endl;
	cout<<"Enter your answer:  "<<endl;
    cin>>choice;
    if (choice=='a'){
        count+=2;
        cout<<">>>You have successfully completed the fourth step"<<endl<<endl;
    }
    else if(( choice=='b') || ( choice=='c') || (choice=='d')){
        cout<<">>>You loosed it correct one is option a"<<endl<<endl;
    }
    else{ 
        cout<<"back to start"<<endl<<endl;
    } 

    cout<<"5: Convert 01000100 to decimal"<<endl;
	cout<<"a: 58           b: 68"<<endl<<"c: 78        d: 88"<<endl;
	cout<<"Enter your answer:  "<<endl;
    cin>>choice;
    if (choice=='b'){
        count+=2;
        cout<<">>>You have successfully completed the fifth step"<<endl<<endl;
    }
    else if(( choice=='a') || ( choice=='c') || (choice=='d')){
        cout<<">>>You loosed it correct one is option b"<<endl<<endl;
    }
    else{ 
        cout<<"back to start "<<endl<<endl;
    } 
    break;


    case 2:
       s.totalscore();
       cout<<"Getting Score........."<<endl;
	   cout<<">>>And Your Score is "<<count<<endl<<endl;
	   break;



    case 3:
       if(count<=10){
			cout<<"<<<I'm sorry but you've been beaten>>>"<<endl<<endl;
		}
		else if(count==10){
			cout<<" <<<You won the game>>> "<<endl<<endl;
		}
		break;   
     
    case 4:
			cout<<"----Have a Nice Day!!----"<<endl;
			break;
	}

    } while(x!=4);
      return 0;   
}
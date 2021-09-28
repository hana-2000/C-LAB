#include <iostream>
using namespace std;

class player{
protected:
    string name;
    string gender;
    int age;
public:
    player(string NAME,string GENDER,int AGE){
    name=NAME;
    gender=GENDER;
    age=AGE;
    }
    void getDataPlayer();
    void opPlayer();
};

class physique{
protected:
    float height;
    float weight;
public:
    physique(float HEIGHT,float WEIGHT){
    height=HEIGHT;
    weight=WEIGHT;
    }
    void opPhysique();
};

class game:public player,public physique{
protected:
    string game_name;
public:
 game(string NAME,string GENDER,int AGE,float HEIGHT,float WEIGHT,string GAMENAME):
     player(NAME,GENDER,AGE),
     physique(HEIGHT,WEIGHT)
     {
 game_name=GAMENAME;
 }
  void op();

};

void player::opPlayer(){
cout <<"Name : " <<name <<endl<<"Gender :"<<gender<<endl<<"Age :"<<age<<endl;
}
void physique::opPhysique(){
cout<<"Height : "<<height<<endl<<"Weight :"<<weight<<endl;
}
void game::op(){

cout << "game :" <<game_name<<endl;
}
int main(){
int age;
string name,gender,game_name;
float height,weight;
cout<<"Enter the Name,Gender,Age \n";
cin>> name >>gender>>age;
cout << "Enter the Height and weight \n";
cin>>height>>weight;
cout<< "Enter the name of GAme "<<endl;
cin>> game_name;
game g(name,gender,age,height,weight,game_name);
g.op();
    g.opPlayer();
    g.opPhysique();
return 0;
}

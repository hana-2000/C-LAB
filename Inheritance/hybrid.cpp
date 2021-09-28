#include <iostream>
using namespace std;

class player{
protected:
    string name;
    string gender;
    int age;
public:
    void getDataPlayer();
    void opPlayer();
};

class physique:public player{
protected:
    float height;
    float weight;
public:
    void getDataPhysique();
    void opPhysique();
};


class location{
protected:
    string city;
    int pin;
public:
    void getDataLocation();
    void opLocation();

};

class game:public location,public physique{
protected:
    string game_name;
public:
  void getData();
  void op();

};

void player::getDataPlayer(){
cout<<"Enter the Name,Gender,Age \n";
cin>> name >>gender>>age;
}
void player::opPlayer(){
cout <<"Name : " <<name <<endl<<"Gender :"<<gender<<endl<<"Age :"<<age<<endl;
}
void physique::getDataPhysique(){
cout << "Enter the Height and weight \n";
cin>>height>>weight;
}
void physique::opPhysique(){
cout<<"Height : "<<height<<endl<<"Weight :"<<weight<<endl;
}
void location::getDataLocation(){
cout << "Enter the City name and Pin number"<<endl;
cin>>city>>pin;

}
void location::opLocation(){
    cout << "City :"<<city << endl<< "Pin :"<<pin<<endl;
}
void game::getData(){
cout<< "Enter the name of GAme "<<endl;
cin>> game_name;
}
void game::op(){

cout << "game :" <<game_name<<endl;
}
int main(){
    game g;
    g.getData();
    g.getDataPlayer();
    g.getDataPhysique();
    g.getDataLocation();
    g.op();
    g.opPlayer();
    g.opPhysique();
    g.opLocation();

return 0;
}

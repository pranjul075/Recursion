#include<iostream>
using namespace std;
void reachHome(int source,int destination){
    cout<<"Source "<<source<<" Destination "<<destination<<endl;
    if(source==destination){
        return;
    }
    source++;//this is the smaller problem
    reachHome(source,destination);//this is the bigger problem
}

int main(){
    int destination=10;
    int source=0;
    reachHome(source,destination);
    cout<<"Reached home"<<endl;
}
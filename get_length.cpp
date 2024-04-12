#include<iostream>
using namespace std;
int getlength(char name[]){
int count=0;
for(int i=0;name[i]!='\0';i++){

    count++;
}
return count;
}
int main(){
    char name[20];
    cout<<"enter youe name"<< endl;
    cin>> name;

    cout<<"your name is:";
    cout<< name<< endl;
    cout<<"your name has"<< " "<< getlength(name)<< " "<<"characters"<< endl;
   
    return 0;

}


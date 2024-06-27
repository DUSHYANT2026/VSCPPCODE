#include<iostream>
using namespace std;
class node{
public:
int key;
int data;
node* next;
node(){
key=0;
data=0;
next==NULL;}
node(int k,int d){
key=k;
data=d;;
next=NULL;}};

class stack{
public:
node* top;
stack(){
top=NULL;}

bool isempty(){
if(top==NULL)
return true;
else
return false;}

bool nodeexist(node* n){
node* temp=top;
bool exist=false;
while(temp!=NULL){
if(temp->key==n->key){
exist=true;
break;}
temp=temp->next;}
return exist;}

void push(node* n){
if(nodeexist(n)){
cout<<"NODE EXIST WITH THE SAME KEY YOU ENTERED SO ENTER NODE WITH DIFFERENT KEY: "<<endl;}
else if(isempty()){
top=n;
cout<<"NODE PUSHED SUCESSFULLY:"<<endl;}
else{
node* temp=top;
top=n;
n->next=temp;
cout<<"NODE PUSHED SUCESSFULLY:"<<endl;}}

node* pop(){
node* temp=NULL;
if(isempty())
return temp;
else{
temp=top;
top=top->next;}
return temp;}

node* peek(){
node* temp=NULL;
if(isempty())
return temp;
else
return top;}

int count(){
int count=0;
node* temp=top;
while(temp!=NULL){
count++;
temp=temp->next;}
return count;}

void display(){
if(isempty()){
cout<<"STACK IS EMPTY THERE IS NO NODE: "<<endl;}
else{
node* temp=top;
while(temp!=NULL){
cout<<"("<<temp->key<<","<<temp->data<<")"<<" -> ";
temp=temp->next;}}}

};
int main(){
stack s;
int option,key,data;

do{
cout<<"ENTER THE OPTION NUMBER TO EXICUTES THE STACK PROGRAM: 0. TO EXIST FORM THE PROGRAME: "<<endl;
cout<<"1) TO PUSH()"<<endl;
cout<<"2) TO POP()"<<endl;
cout<<"3) TO EMPTY()"<<endl;
cout<<"4) TO PEEK()"<<endl;
cout<<"5) TO COUNT()"<<endl;
cout<<"6) TO DISPLAY()"<<endl;
cout<<"7) TO CLEAR SCREEN:"<<endl;
cin>>option;
node* newnode=new node();

switch(option){
case 0:
break;
case 1:
cout<<"PUSH FUNCTION IS CALLED:"<<endl;
cout<<"ENTER KEY FIRST AND THEN DATA SECOND: "<<endl;
cin>>key;
cin>>data;
newnode->key=key;
newnode->data=data;
s.push(newnode);
break;
case 2:
cout<<"POP FUNCTION IS CALLED:"<<endl;
newnode=s.pop();
cout<<"TOP OF STACK IS: (" <<newnode->key << "," << newnode->data << ")";
delete newnode;
cout<<endl;
break;
case 3:
cout<<"EMPTY FUNCTION IS CALLED:"<<endl;
if(s.isempty())
cout<<"STACK IS EMPTY PLEASE ENTER NODE: "<<endl;
else
cout<<"STACK IS NOT EMPTY: "<<endl;
break;
case 4:
cout<<"PEEK FUNCTION IS CALLED:"<<endl;
newnode=s.peek();
cout<<"TOP OF STACK IS: (" <<newnode->key << "," << newnode->data << ")";
break;
case 5:
cout<<"COUNT FUNCTION IS CALLED: "<<endl;
cout<<"NUMBER OF NODES IN THE STACK IS : "<<s.count()<<endl;
break;
case 6:
cout<<"DISPLAY FUNCTION IS CALLED:"<<endl;
s.display();
break;
case 7:
system("cls");
break;
default:
cout<<"ENTER THE PROPER OPTION THAT IS GIVEN TO YOU: "<<endl;
break;}
}while(option!=0);
return 0;}
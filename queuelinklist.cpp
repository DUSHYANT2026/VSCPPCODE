// #include<iostream>
// using namespace std;
// class node{
// public:
// int key;
// int data;
// node* next;
// node(){
// key=0;
// data=0;
// next=NULL;}
// node(int k,int d){
// key=k;
// data=d;
// next=NULL;}};

// class queue{
// public:
// node* front;
// node* rear;
// queue(){
// front=NULL;
// rear=NULL;}

// bool isempty(){
// if(front==NULL&&rear==NULL)
// return true;
// else 
// return false;}

// bool nodeexist(node* n){
// node* temp=front;
// bool exist=false;
// while(temp!=NULL){
// if(temp->key==n->key){
// exist=true;
// break;}
// temp=temp->next;}
// return exist;}

// void enqueue(node* n){
// if(isempty()){
// front=n;
// rear=n;
// cout<<"ENQUEUE FUNCTION IS APPLIED SUCESSFULLY:"<<endl;}
// else if(nodeexist(n)){
// cout<<"ENTER ANOTHER NODE WITH DIFFERENT KEY BECUASE SAME CAN NOT EXIST IN THE QUEUE:"<<endl;}
// else{
// rear->next=n;
// rear=n;
// cout<<"ENQUEUE FUNCTION IS APPLIED SUCESSFULLY:"<<endl;}}

// node* dequeue(){
// if(isempty()==true){
// cout<<"THERE IS NO NODE IN THE QUEUE:"<<endl;
// return NULL;}
// else if(front==rear){
// node* temp=front;
// rear=NULL;
// front=NULL;
// return temp;}
// else{
// node* temp=front;
// front=front->next;
// return temp;}}

// int count(){
// int count=0;
// node* temp=front;
// while(temp!=NULL){
// count++;
// temp=temp->next;}
// return count;}

// void display(){
// if(isempty()==true){
// cout<<"QUEUE IS EMPTY , FIRST ENTER NEW NODE: "<<endl;}
// else{
// node* temp=front;
// while(temp!=NULL){
// cout<<"("<<temp->key<<","<<temp->data<<")"<<" -> "<<"  ";
// temp=temp->next;}}}

// };

// int main(){
// queue q;
// int option,key,data;

// do{
// cout<<"QUEUE PROGRAME IS CALLED CHOSSE ANY OPTION THAT WIRTEN UNDER,ENTER 0 TO EXIT FROM THE CASE:"<<endl;
// cout<<"1) TO ENQUEUE()"<<endl;
// cout<<"2) TO DEQUEUE()"<<endl;
// cout<<"3) EMPTY FUNTION()"<<endl;
// cout<<"4) TO DISPLAY()"<<endl;
// cout<<"5) TO COUNT() "<<endl;
// cout<<"6) TO CLEAR SCREEN"<<endl;
// cin>>option;
// node* newnode=new node();

// switch(option){
// case 0:
// break;
// case 1:
// cout<<"ENQUEUE FUNTION IS CALLED: "<<endl;
// cout<<"FIRST ENTER THE KEY THEN  ENETR THE DATA:"<<endl;
// cin>>key;
// cin>>data;
// newnode->key=key;
// newnode->data=data;
// q.enqueue(newnode);
// cout<<endl;
// break;
// case 2:
// cout<<"DEQUEUE FUNCTION IS CALLED:"<<endl;
// q.dequeue();
// cout<<endl;
// break;
// case 3:
// cout<<"EMPTY FUNCTION IS CALLED TO CHECK THAT QUEUE IS EMOTY OR NOT: "<<endl;
// if(q.isempty())
// cout<<"QUEUE IS EMPTY! PLEASE ENTER NODE IN IT:\n"<<endl;
// else
// cout<<"THERE ARE SOME NODE IN IT SO QUEUE IS NOT EMPTY:\n"<<endl;
// break;
// case 4:
// cout<<"DISPLAY FUNCTION IS CALLED:"<<endl;
// cout<<"ALL THE NODE IN THE QUEUE: "<<endl;
// q.display();
// cout<<endl;
// break;
// case 5:
// cout<<"COUNT OPERATION IS CALLED:"<<endl;
// cout<<"TOTAL NUMBER OF THE NODE THAT IS PRESENT IN THE QUEUE: "<<q.count()<<endl;
// cout<<endl;
// break;
// case 6:
// system("cls");
// break;
// default:
// cout<<"ENTER PROPER OPTION THAT IS ASSIGN TO YOU:"<<endl;
// cout<<endl;
// break;}
// }while(option!=0);
// return 0;}




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
next=NULL;}
node(int k,int d){
key=k;
data=d;}};

class deque{
public:
node* front;
node* rear;
deque(){
front=NULL;
rear=NULL;}

bool isempty(){
if(front==NULL&&rear==NULL)
return true;
else 
return false;}

bool nodeexist(node* n){
node* temp=front;
bool exist=false;
do{
if(temp->key==n->key){
exist=true;
break;}
temp=temp->next;}
while(temp!=NULL);
return exist;}

void enqueue(node* n){
if(isempty()){
front=n;
rear=n;
cout<<"ENQUEUE FUNCTION IS APPLIED SUCESSFULLY:"<<endl;}
else if(nodeexist(n)){
cout<<"ENTER ANOTHER NODE WITH DIFFERENT KEY BECUASE SAME CAN NOT EXIST IN THE QUEUE:"<<endl;}
else{
rear->next=n;
rear=n;
n->next=NULL;
cout<<"ENQUEUE FUNCTION IS APPLIED SUCESSFULLY:"<<endl;}}

node* dequeue(){
if(isempty()==true){
cout<<"THERE IS NO NODE IN THE QUEUE:"<<endl;
return NULL;}
else if(front==rear){
node* temp=front;
rear=NULL;
front=NULL;
return temp;}
else{
node* temp=front;
front=front->next;
rear->next=front;
return temp;}}

int count(){
int count=0;
node* temp=front;
do{
count++;
temp=temp->next;}
while(temp!=NULL);
return count;}

void display(){
if(isempty()==true){
cout<<"QUEUE IS EMPTY , FIRST ENTER NEW NODE: "<<endl;}
else{
node* temp=front;
do{
cout<<"("<<temp->key<<","<<temp->data<<")"<<" -> "<<"  ";
temp=temp->next;}
while(temp!=NULL);}}

};

int main(){
deque q;
int option,key,data;

do{
cout<<"DEQUE PROGRAME IS CALLED CHOSSE ANY OPTION THAT WIRTEN UNDER,ENTER 0 TO EXIT FROM THE CASE:"<<endl;
cout<<"1) TO ENQUEUE()"<<endl;
cout<<"2) TO DEQUEUE()"<<endl;
cout<<"3) EMPTY FUNTION()"<<endl;
cout<<"4) TO DISPLAY()"<<endl;
cout<<"5) TO COUNT() "<<endl;
cout<<"6) TO CLEAR SCREEN"<<endl;
cin>>option;
node* newnode=new node();

switch(option){
case 0:
break;
case 1:
cout<<"ENQUEUE FUNTION IS CALLED: "<<endl;
cout<<"FIRST ENTER THE KEY THEN  ENETR THE DATA:"<<endl;
cin>>key;
cin>>data;
newnode->key=key;
newnode->data=data;
q.enqueue(newnode);
cout<<endl;
break;
case 2:
cout<<"DEQUEUE FUNCTION IS CALLED:"<<endl;
q.dequeue();
cout<<endl;
break;
case 3:
cout<<"EMPTY FUNCTION IS CALLED TO CHECK THAT QUEUE IS EMOTY OR NOT: "<<endl;
if(q.isempty())
cout<<"QUEUE IS EMPTY! PLEASE ENTER NODE IN IT:\n"<<endl;
else
cout<<"THERE ARE SOME NODE IN IT SO QUEUE IS NOT EMPTY:\n"<<endl;
break;
case 4:
cout<<"DISPLAY FUNCTION IS CALLED:"<<endl;
cout<<"ALL THE NODE IN THE QUEUE: "<<endl;
q.display();
cout<<endl;
break;
case 5:
cout<<"COUNT OPERATION IS CALLED:"<<endl;
cout<<"TOTAL NUMBER OF THE NODE THAT IS PRESENT IN THE QUEUE: "<<q.count()<<endl;
cout<<endl;
break;
case 6:
system("cls");
break;
default:
cout<<"ENTER PROPER OPTION THAT IS ASSIGN TO YOU:"<<endl;
cout<<endl;
break;}
}while(option!=0);
return 0;}
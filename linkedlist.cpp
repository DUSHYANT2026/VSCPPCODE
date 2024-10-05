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
// data=d;}};

// class linklist{
// public:
// node* head;
// linklist(){
// head=NULL;}
// linklist(node* n){
// head=n;}

// node* nodeexist(int k){
// node* temp=NULL;
// node* ptr=head;
// while(ptr!=NULL){
// if(ptr->key==k){
// temp=ptr;}
// ptr=ptr->next;}
// return temp;}

// void nodeappend(node* n){
// if(nodeexist(n->key)!=NULL){
// cout<<"ENTER NODE WITH DIFFERENT KEY BECAUSE SAME KEY CAN NOT EXIST IN LINKED LIST:"<<endl;}
// else{
// if(head==NULL){
// head=n;
// cout<<"NODE APPENDED SUCESSFULLY: "<<endl;} 
// else{
// node* ptr=head;
// while(ptr->next!=NULL){
// ptr=ptr->next;}
// ptr->next=n;
// cout<<"NODE APPENDED SUCESSFULLY: "<<endl;}}}

// void nodeprepend(node* n){
// if(nodeexist(n->key)!=NULL){
// cout<<"ENTER NODE WITH DIFFERENT KEY BECAUSE SAME KEY CAN NOT EXIST IN LINKED LIST:"<<endl;}
// else{
// n->next=head;
// head=n;
// cout<<"NODE PREPENDED SUCESSFULLY: "<<endl;}}

// void insertnodebe(int k,node* n){
// node* ptr=nodeexist(k);
// if(ptr==NULL){
// cout<<"THERE IS NOT KEY EXIST ENTER ANOTHER AFTER THAT YOU ENTER NODE:"<<endl;}
// else{
// if(nodeexist(n->key)!=NULL){
// cout<<"ENTER NODE WITH DIFFERENT KEY BECAUSE SAME CAN NOT EXIST: "<<endl;}
// else{
// n->next=ptr->next;
// ptr->next=n;
// cout<<"NEW NODE INSERT AFTER: "<<k<<endl;}}}

void deletenode(int k){
if(head==NULL){
cout<<"THERE IS NO NODE IN SINGLELINKEDLIST: "<<endl;}
else if(head!=NULL){
if(head->key==k){
head=head->next;
cout<<"NODE IS DELETED WITH THE KEY: "<<k<<endl;}
else{
node* temp=NULL;
node* preptr=head;
node* currptr=head->next;
while(currptr!=NULL){
if(currptr->key==k){
temp=currptr;
currptr=NULL;}
else{
preptr=preptr->next;
currptr=head->next;}}
if(temp!=NULL){
preptr->next=temp->next;}
else
cout<<"NODE DOES NOT EXIST WITH KEY THAT YOU ENTERED:"<<endl;}}}

// void updatenode(int k,int d){
// node* ptr=nodeexist(k);
// if(ptr!=NULL){
// ptr->data=d;
// cout<<"NODE UPDATED WHICH HAS KEY: "<<k<<endl;}
// else
// cout<<"THERE IS NO KEY THAT YOU ENTERED SO ENTER NODE WITH DIFFERENT KEY:"<<endl;}

// void displaynode(){
// if(head==NULL)
// cout<<" THERE ARE NO NODE IN THE SINGLELINKEDLIST:"<<endl;
// else{ 
// node* temp=head;
// while(temp!=NULL){
// cout<<"("<<temp->key<<","<<temp->data<<")"<<"---";
// temp=temp->next;}}}

// int count(){
// int count=0;
// node* temp=head;
// while(temp!=NULL){
// count++;
// temp=temp->next;}
// return count;}

// };
// int main(){
// linklist l;
// int option,key,data,key2;

// do{
// cout<<"TO EXCECUTE ALL THE OPERATIONS IN THE SINGLELINKEDLIST. ENTER 0 TO EXIST FROM THE PROGRAME:"<<endl;
// cout<<"1) TO APPEND THE NODE:"<<endl;
// cout<<"2) TO PREPEND THE NODE:"<<endl;
// cout<<"3) TO DELETE THE NODE:"<<endl;
// cout<<"4) TO INSERT THE NODE:"<<endl;
// cout<<"5) TO UPDATE THE NODE:"<<endl;
// cout<<"6) TO DISPLAY THE NODE: "<<endl;
// cout<<"7) TO COUNT THE NODE"<<endl;
// cout<<"8) TO CLEAR THE SCREEN:"<<endl;

// cin>>option;
// node* newnode=new node();

// switch(option){
// case 0:
// break;
// case 1:
// cout<<"APPENDED FUNCTION IS CALEED:  "<<endl;
// cout<<"ENTER KEY FIRST THAN DATA:"<<endl;
// cin>>key;
// cin>>data;
// newnode->key=key;
// newnode->data=data;
// l.nodeappend(newnode);
// cout<<endl;
// break;
// case 2:
// cout<<"PREPEND FUNCTION IS CALLED:"<<endl;
// cout<<"ENTER KEY FIRST THAN DATA:"<<endl;
// cin>>key;
// cin>>data;
// newnode->key=key;
// newnode->data=data;
// l.nodeprepend(newnode);
// cout<<endl;
// break;
// case 3:
// cout<<"DELET OPERATION IS CALLED:"<<endl;
// cout<<"ENTER THE KEY OF NOD THAT YOU WANT TO DELETE: "<<endl;
// cin>>key2;
// l.deletenode(key2);
// cout<<endl;
// break;
// case 4:
// cout<<"INSRET OPERATON IS CALLED: "<<endl;
// cout<<"ENTER THE KEYT WHERE YOU WANT TO INSERT NEWNODE: "<<endl;
// cin>>key2;
// cout<<"ENTER KEY AND DATA FOR NEW NODE THAT YO INSERTED: "<<endl;
// cin>>key;
// cin>>data;
// newnode->key=key;
// newnode->data=data;
// l.insertnodebe(key2,newnode);
// cout<<endl;
// break;
// case 5:
// cout<<"UPDATE OPERATION IS CALLED: "<<endl;
// cout<<"ENTER THE KEY OF NODE IN WHICH YOU WANT TO UPDATE DATA: "<<endl;
// cin>>key;
// cin>>data;
// l.updatenode(key,data);
// cout<<endl;
// break;
// case 6:
// cout<<"DISPLAY OPERATION IS CALLED: "<<endl;
// l.displaynode();
// cout<<endl;
// break;
// case 7:
// cout<<"COUNT OPERATION IS CALLED: "<<endl;
// cout<<"NUMBER OF THE NODE IN THE LINKED LIST: "<<l.count()<<endl;
// cout<<endl;
// break;
// case 8:
// system("cls");
// break;
// default:
// cout<<"TO PROCEED THE PROGRAME ENTER THE PROPER OPTION: "<<endl;
// break;}}while(option!=0);
// return 0;}



// #include<iostream>
// using namespace std;
// class node{
// public:
// int key;
// int data;
// node* next;
// node* previous;
// node(){
// key=0;
// data=0;
// next=NULL;
// previous=NULL;}
// node(int k,int d){
// key=k;
// data=d;}};

// class doublelinklist{
// public:
// node* head;
// doublelinklist(){
// head=NULL;}
// doublelinklist(node* n){
// head=n;}

// node* nodeexist(int k){
// node* temp=NULL;
// node* ptr=head;
// while(ptr!=NULL){
// if(ptr->key==k){
// temp=ptr;}
// ptr=ptr->next;}
// return temp;}

// void nodeappend(node* n){
// if(nodeexist(n->key)!=NULL){
// cout<<"ENTER NODE WITH DIFFERENT KEY BECAUSE SAME KEY CAN NOT EXIST IN LINKED LIST:"<<endl;}
// else if(head==NULL){
// head=n;
// cout<<"NODE APPENDED SUCESSFULLY: AS HEAD NODE: "<<endl;} 
// else{
// node* ptr=head;
// while(ptr->next!=NULL){
// ptr=ptr->next;}
// ptr->next=n;
// n->previous=ptr;
// cout<<"NODE APPENDED SUCESSFULLY: "<<endl;}}

// void nodeprepend(node* n){
// if(nodeexist(n->key)!=NULL){
// cout<<"ENTER NODE WITH DIFFERENT KEY BECAUSE SAME KEY CAN NOT EXIST IN LINKED LIST:"<<endl;}
// else{
// if(head==NULL){
// head=n;
// cout<<"NODE PREPPENDED SUCESSFULLY: WHEN HEAD IS NULL: "<<endl;}
// else{
// head->previous=n;
// n->next=head;
// head=n;
// cout<<"NODE PREPPENDED SUCESSFULLY: "<<endl;}}}

// void insertnode(int k,node* n){
// node* ptr=nodeexist(k);
// if(ptr==NULL){
// cout<<"THERE IS NODE WHICH HAVE THE KEY THAT YOU ENTERED SO ENTER DIFFERENT KEY: "<<endl;}
// else{
// if(nodeexist(n->key)!=NULL){
// cout<<"ENTER NODE WITH DIFFERENT KEY BECAUSE SAME KEY CAN NOT EXIST IN LINKED LIST:"<<endl;}
// else{
// node* newnext=ptr->next;
// if(newnext==NULL){
// ptr->next=n;
// n->previous=ptr;
// cout<<"NODE INSERTED AT THE END OF THE DOUBLELINKED LIST:"<<endl;}
// else{
// n->next=newnext;
// newnext->previous=n;
// n->previous=ptr;
// ptr->next=n;
// cout<<"NODE INSERT BETWEEN THE LIST: "<<endl;}}}}

// void deletenode(int k){
// node* ptr=nodeexist(k);
// if(ptr==NULL){
// cout<<"THERE IS NO NODE WITH KEY THAT YOU ENTERED SO ENTER NODE WITH DIFFERENT KEY: "<<endl;}
// else{
// if(head->key==k){
// head=head->next;
// cout<<"NODE IS DELETED AFTER THE HEAD: OR FIRST NODE IS DELETED:"<<endl;}
// else{
// node* newnext=ptr->next;
// node* newpre=ptr->previous;
// if(newnext==NULL){
// newpre->next=NULL;
// cout<<"NODE IS DELETED OR LAST NODE IS DELETED: "<<endl;}
// else{
// newpre->next=newnext;
// newnext->previous=newpre;
// cout<<"NODE DELETED BETWEEN : THE LIST:"<<endl;}}}}

// void updatenode(int k,int d){
// node* ptr=nodeexist(k);
// if(ptr==NULL){
// cout<<"THERE IS NO NODE WITH THAT KEY THAT YOU ENTERED:"<<endl;}
// else if(ptr!=NULL){
// ptr->data=d;
// cout<<"NODE UPDATE SUCESSFULLY:"<<endl;}}

// void displaynode(){
// if(head==NULL){
// cout<<"DOUBLEY LINKED LIST IS EMPTY THER IS NO NODE IN IT: "<<endl;}
// else{
// node* temp=head;
// while(temp!=NULL){
// cout<<"("<<temp->key<<","<<temp->data<<"---";
// temp=temp->next;}}}

// int count(){
// int count=0;
// node* temp=head;
// while(temp!=NULL){
// count++;
// temp=temp->next;}
// return count;}

// };
// int main(){
// doublelinklist l;
// int option,key,data,key2;

// do{
// cout<<"TO EXCECUTE ALL THE OPERATIONS IN THE SINGLELINKEDLIST. ENTER 0 TO EXIST FROM THE PROGRAME:"<<endl;
// cout<<"1) TO APPEND THE NODE:"<<endl;
// cout<<"2) TO PREPEND THE NODE:"<<endl;
// cout<<"3) TO DELETE THE NODE:"<<endl;
// cout<<"4) TO INSERT THE NODE:"<<endl;
// cout<<"5) TO UPDATE THE NODE:"<<endl;
// cout<<"6) TO DISPLAY THE NODE:"<<endl;
// cout<<"7) TO COUNT THE NODE:"<<endl;
// cout<<"8) TO CLEAR THE SCREEN:"<<endl;

// cin>>option;
// node* newnode=new node();

// switch(option){
// case 0:
// break;
// case 1:
// cout<<"APPENDED FUNCTION IS CALEED:  "<<endl;
// cout<<"ENTER KEY FIRST THAN DATA:"<<endl;
// cin>>key;
// cin>>data;
// newnode->key=key;
// newnode->data=data;
// l.nodeappend(newnode);
// cout<<endl;
// break;
// case 2:
// cout<<"PREPEND FUNCTION IS CALLED:"<<endl;
// cout<<"ENTER KEY FIRST THAN DATA:"<<endl;
// cin>>key;
// cin>>data;
// newnode->key=key;
// newnode->data=data;
// l.nodeprepend(newnode);
// cout<<endl;
// break;
// case 3:
// cout<<"DELET OPERATION IS CALLED:"<<endl;
// cout<<"ENTER THE KEY OF NOD THAT YOU WANT TO DELETE: "<<endl;
// cin>>key2;
// l.deletenode(key2);
// cout<<endl;
// break;
// case 4:
// cout<<"INSRET OPERATON IS CALLED: "<<endl;
// cout<<"ENTER THE KEYT WHERE YOU WANT TO INSERT NEWNODE: "<<endl;
// cin>>key2;
// cout<<"ENTER KEY AND DATA FOR NEW NODE THAT YO INSERTED: "<<endl;
// cin>>key;
// cin>>data;
// newnode->key=key;
// newnode->data=data;
// l.insertnode(key2,newnode);
// cout<<endl;
// break;
// case 5:
// cout<<"UPDATE OPERATION IS CALLED: "<<endl;
// cout<<"ENTER THE KEY OF NODE IN WHICH YOU WANT TO UPDATE DATA: "<<endl;
// cin>>key;
// cin>>data;
// l.updatenode(key,data);
// cout<<endl;
// break;
// case 6:
// cout<<"DISPLAY OPERATION IS CALLED: "<<endl;
// l.displaynode();
// cout<<endl;
// break;
// case 7:
// cout<<"COUNT OPERATION IS CALLED:"<<endl;
// cout<<"TOTAL NUMBER OF NODE IN THE LINKED LIST: "<<l.count()<<endl;
// break;
// case 8:
// system("cls");
// break;
// default:
// cout<<"TO PROCEED THE PROGRAME ENTER THE PROPER OPTION: "<<endl;
// break;}}while(option!=0);
// return 0;}  


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
// data=d;}};

// class circularlist{
// public:
// node* head;
// circularlist(){
// head=NULL;}
// circularlist(node* n){
// head=n;}

// node* nodeexist(int k){
// node* temp=NULL;
// node* ptr=head;
// if(ptr==NULL)
// return temp;
// else{
// do{
// if(ptr->key==k){
// temp=ptr;}
// ptr=ptr->next;
// }while(ptr!=head);
// return temp;}}

// void nodeappend(node* n){
// if(nodeexist(n->key)!=NULL){
// cout<<"ENTER NODE WITH DIFFERENT KEY BECAUSE NODE ALREADY EXIST OF KEY THAT YOU ENETERED: "<<endl;}
// else{
// if(head==NULL){
// head=n;
// n->next=head;
// cout<<"NODE APPENDED AT THE FIRST: "<<endl;}
// else{
// node* ptr=head;
// while(ptr->next!=head){
// ptr=ptr->next;}
// ptr->next=n;
// n->next=head;
// cout<<"NODE IS APPENDED SUCESSFULLY:"<<endl;}}}

// void nodeprepend(node* n){
// if(nodeexist(n->key)!=NULL){
// cout<<"ENTER NODE WITH DIFFERENT KEY BECAUSE NODE ALREADY EXIST OF KEY THAT YOU ENETERED: "<<endl;}
// else{
// if(head==NULL){
// head=n;
// n->next=head;
// cout<<"NODE APPENDED AT THE FIRST: "<<endl;}
// else{
// node* ptr=head;
// while(ptr->next!=head){
// ptr=ptr->next;}
// ptr->next=n;
// n->next=head;
// head=n;
// cout<<"NODE IS PREPENDED SUCESSFULLLY: "<<endl;}}}

// void insertnode(int k,node* n){
// node* ptr=nodeexist(k);
// if(ptr==NULL){
// cout<<"THERE IS NODE WITH KEY THAT YOU ENTERD: SO ENTER ANOTHER NODE WITH DIFFERENT KEY: "<<endl;}
// else{
// if(nodeexist(n->key)!=NULL){
// cout<<"ENTER NODE WITH DIFFERENT KEY BECAUSE NODE ALREADY EXIST OF KEY THAT YOU ENETERED: "<<endl;}
// else{
// if(ptr->next==head){
// n->next=head;
// ptr->next=n;
// cout<<"NODE INSERTED AT THE END OF THE HEAD NODE: "<<endl;}
// else{
// n->next=ptr->next;
// ptr->next=n;
// cout<<"NODE IS INSERTED BETWEEN THE TWO NODES AFTER THE KEY THAT YOU ENTERED: "<<endl;}}}}

// void deletenode(int k){
// node* ptr=nodeexist(k);
// if(ptr==NULL){
// cout<<"THERE IS NODE WITH KEY THAT YOU ENTERD: SO ENTER ANOTHER NODE WITH DIFFERENT KEY: "<<endl;}
// else{
// if(ptr==head){
// if(head->next==NULL){
// head=NULL;
// cout<<"NODE IS DELETED LIST ONLY HAS ONE NODE WHICH IS HEAD: "<<endl;}
// else{
// node* ptr1=head;
// while(ptr1->next!=head){
// ptr1=ptr1->next;}
// ptr1->next=head->next;
// head=head->next;}
// cout<<"NODE IS DELETED LIST HAS MANY NODE BY HEAD NODE IS DELETED: "<<endl;}
// else{
// node* temp=NULL;
// node* prevptr=head;
// node* currentptr=head->next;
// while(currentptr!=NULL){
// if(currentptr->key==k){
// temp=currentptr;
// currentptr=NULL;}
// else{
// prevptr=prevptr->next;
// currentptr=currentptr->next;}}
// prevptr->next=temp->next;
// cout<<"Node UNLINKED with keys value: " << k << endl;}}}

// void updatenode(int k,int d){
// node* ptr=nodeexist(k);
// if(ptr->key==k){
// ptr->data=d;
// cout<<"NODE UPDATED BY KEY THAT YOU ENETERED:"<<endl;}
// else
// cout<<"THERE IS NO NODE WITH KEY THAT YOU ENTERED IN THE LIST:"<<endl;}

// void displaynode(){
// if(head==NULL){
// cout<<"THERE IS NOTHING IN THE CIRCULAR LINKEDLIST: "<<endl;}
// else{
// node* ptr=head;
// do{
// cout<<"("<<ptr->key<<","<<ptr->data<<")"<<"---";
// ptr=ptr->next;
// }while(ptr!=head);}}

// int count(){
// int count=0;
// node* temp=head;
// do{
// count++;
// temp=temp->next;
// }while(temp!=head);
// return count;}

// };
// int main(){
// circularlist l;
// int option,key,data,key2;

// do{
// cout<<"TO EXCECUTE ALL THE OPERATIONS IN THE SINGLELINKEDLIST. ENTER 0 TO EXIST FROM THE PROGRAME:"<<endl;
// cout<<"1) TO APPEND THE NODE:"<<endl;
// cout<<"2) TO PREPEND THE NODE:"<<endl;
// cout<<"3) TO DELETE THE NODE:"<<endl;
// cout<<"4) TO INSERT THE NODE:"<<endl;
// cout<<"5) TO UPDATE THE NODE:"<<endl;
// cout<<"6) TO DISPLAY THE NODE:"<<endl;
// cout<<"7) TO COUNT THE NODE:"<<endl;
// cout<<"8) TO CLEAR THE SCREEN:"<<endl;

// cin>>option;
// node* newnode=new node();

// switch(option){
// case 0:
// break;
// case 1:
// cout<<"APPENDED FUNCTION IS CALEED:  "<<endl;
// cout<<"ENTER KEY FIRST THAN DATA:"<<endl;
// cin>>key;
// cin>>data;
// newnode->key=key;
// newnode->data=data;
// l.nodeappend(newnode);
// cout<<endl;
// break;
// case 2:
// cout<<"PREPEND FUNCTION IS CALLED:"<<endl;
// cout<<"ENTER KEY FIRST THAN DATA:"<<endl;
// cin>>key;
// cin>>data;
// newnode->key=key;
// newnode->data=data;
// l.nodeprepend(newnode);
// cout<<endl;
// break;
// case 3:
// cout<<"DELET OPERATION IS CALLED:"<<endl;
// cout<<"ENTER THE KEY OF NODE THAT YOU WANT TO DELETE: "<<endl;
// cin>>key2;
// l.deletenode(key2);
// cout<<endl;
// break;
// case 4:
// cout<<"INSRET OPERATON IS CALLED: "<<endl;
// cout<<"ENTER THE KEYT WHERE YOU WANT TO INSERT NEWNODE: "<<endl;
// cin>>key2;
// cout<<"ENTER KEY AND DATA FOR NEW NODE THAT YO INSERTED: "<<endl;
// cin>>key;
// cin>>data;
// newnode->key=key;
// newnode->data=data;
// l.insertnode(key2,newnode);
// cout<<endl;
// break;
// case 5:
// cout<<"UPDATE OPERATION IS CALLED: "<<endl;
// cout<<"ENTER THE KEY OF NODE IN WHICH YOU WANT TO UPDATE DATA: "<<endl;
// cin>>key;
// cin>>data;
// l.updatenode(key,data);
// cout<<endl;
// break;
// case 6:
// cout<<"DISPLAY OPERATION IS CALLED: "<<endl;
// l.displaynode();
// cout<<endl;
// break;
// case 7:
// cout<<"COUNT OPERATION IS CALLED:"<<endl;
// cout<<"TOTAL NUMBER OF NODE IN THE LINKED LIST: "<<l.count()<<endl;
// break;
// case 8:
// system("cls");
// break;
// default:
// cout<<"TO PROCEED THE PROGRAME ENTER THE PROPER OPTION: "<<endl;
// break;}}while(option!=0);
// return 0;}  
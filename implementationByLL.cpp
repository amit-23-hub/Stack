#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class  node {

    public :
       int data ;
       node*next ;

       // constructor

       node(int val){
        data = val ;
        next = NULL ;
       }

} ;

// class for LL 

class Stack {

   
        int size ; 
        node *top ;
         public :

        Stack(){
            size = 0 ;
            top = NULL  ;
        }


        void push(int data ){
            node* temp = new node(data);             /// for the case when heap memory is full 
            if(temp==NULL){
                cout<<"stack overflow"<<endl;
            }else{
            temp->next = top ;
            top = temp ;
            size++;
            cout<<"push"<< " " << data<<endl;
            }
        }

        // pop 
        void pop (){
            if(top==NULL){
                cout << "underflow" ;
                
        }else{
            node *temp = top ;
            cout<<"poped  "<<top->data <<endl ;
            top = top->next ;
            delete temp ;
            size-- ;
        }
        }

        // empty
        bool isEmpty (){
            return top == NULL ;
        }

        // size
        int isSize(){
            return size ;
        } 

} ;



int main()
{
        Stack S ;
        S.push(5);
        S.push(6);
        S.push(7);
        S.push(8);
      cout<<  S.isSize() <<endl;
        S.pop();
           cout<<  S.isSize() <<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Stack
{
private:
	int top;
	int arr[5];
public:
	Stack()
	{
		top=-1;
		for(int i=0;i<5;i++)
		{
			arr[i]=0;

		}
	}

	bool isEmpty()
	{
		if(top==-1)
			return true;
		else
			return false;
	}
	bool isFull()
	{
		if(top==4)
			return true;
		else
			return false;
	}

	void display()
	{
		cout<<"All values in the Stack is "<<endl;
		for(int i=4;i>=0;i--)
		{
			cout<<arr[i]<<endl;
		}
	}

	int count()
	{
		return (top+1);
	}

	void push(int val)
	{
		if(isFull())
		{
			cout<<"Stack OverFlow"<<endl;

		}
		else
		{
			top++;
			arr[top]=val;
		}
	}

	int pop()
	{
		if(isEmpty())
		{
			cout<<"Stack UnderFlow"<<endl;
			return 0;
		}
		else
		{
			int popValue=arr[top];
			arr[top]=0;
			top--;
			return popValue;

		}
	}

	void change(int pos,int val)
	{
		arr[pos]=val;
		cout<<"value changed at location"<<pos<<endl;
	}

	int peek(int pos)
	{
		if(isEmpty())
		{
			cout<<"Stak OverFlow"<<endl;
			return 0;
		}
		else
		{
			return arr[pos];
		}
	}


};
int main()
{
	Stack s1;
	int option,value,position;
	do
	{
		cout<<"What operation do you want to perform ?? Select Option number. Enter 0 to exit"<<endl;
		cout<<"1.isFull()"<<endl;
		cout<<"2.isEmpty()"<<endl;
		cout<<"3.display()"<<endl;
		cout<<"4.count()"<<endl;
		cout<<"5.push()"<<endl;
		cout<<"6.pop()"<<endl;
		cout<<"7.change()"<<endl;
		cout<<"8.peek()"<<endl;
		cout<<"9.clearScreen"<<endl;

		cin>>option;

		switch(option)
		{
		case 0:
			break;


		case 1:
	        if(s1.isFull())
		        cout<<"Stack is Full"<<endl;
	        else
		        cout<<"Stack is not Full"<<endl;
		    break;


		case 2:
			if(s1.isEmpty())
				cout<<"Stack is empty"<<endl;
			else
				cout<<"Stack is not empty"<<endl;
			break;

	    case 3:
	        cout<<"Display Funtion called "<<endl;
	        s1.display();
	        break;	

	    case 4:
	        cout<<"Total number of element in Stack is : "<<s1.count()<<endl<<endl;  
	        break; 

	    case 5:
	        cout<<"Enter a value to push into the Stack "<<endl;
	        cin>>value;
	        s1.push(value);
	        break;

	    case 6:
	        cout<<"--- Pop Function called ---"<<endl;
	        cout<<"Popped Value "<<s1.pop()<<endl;
	        break;

	    case 7:
	        cout<<"--- Change Function Called ---"<<endl;
	        cout<<"Enter position at which you want to change :";
	        cin>>position; 
	        cout<<endl;
	        cout<<"Enter value of item you want to change :";
	        cin>>value;
	        s1.change(position,value);
	        break; 


	    case 8:
	        cout<<"--- Peek() funtion Called---";
	        cout<<"Enter postion of item you want to peek : "<<endl;
	        cin>>position;
	        cout<<"Value at position "<<position<<s1.peek(position)<<endl;
	        break;

	     case 9:
	        system("cls");
	        break;        

	    default:
			cout<<"Enter proper option number"<<endl;

		}
	}
	while(option != 0);
	return 0;
	
}


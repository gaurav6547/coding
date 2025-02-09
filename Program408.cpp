#include<iostream>

using namespace std;

#define SIZE 10

class CircularQueue
{
	   int a[SIZE];
	   int Front;
	   int Rear;
	   
	   public :
	   
	   CircularQueue()//default constructor
	   {
	     Rear = Front = -1;	
	   }	
	   
	   bool isFull()//Full Function
	   {
	   	 if(Front == 0 && Rear == SIZE-1)
	   	 {
	   	    return true;	
		 }
		 
		 if(Front == Rear + 1)
		 {
		 	return true;
		 }
		 else
		 return false;
	   }
	   
	   bool isEmpty()
	   {
	   	 if(Front == -1)
	   	 {
	   	    return true;	
		 }
		 else
		 {
		 	return false;
		 }
	   }
	   
	   void enQueue(int x);
	   int deQueue();
	   void Display();
	   int Size();
};

void CircularQueue :: enQueue(int x)
{
	if(isFull())
	{
		cout<<"Queue is FUll!"<<endl;
	}
	
	else
	{
		if(Front == -1)//Filter
		{
			Front = 0;
		}
		
		Rear = (Rear + 1) % SIZE;
		
		a[Rear] = x;
		cout<< endl << "Inserted " <<  x << endl; 		
	}
}

int CircularQueue :: deQueue()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty"<<endl;
	}
	else
	{
		int y;
		
		y = a[Front];
		
		if(Front == Rear)
		{
		   Front = -1;
		   Rear = -1;
		}
		else
		{
			Front = (Front+1) % SIZE;
		}
		return(y);
	}
}

void CircularQueue :: Display()
{
    /* Function to display status of Circular Queue */
    int i;
    if(isEmpty()) 
    {
        cout << endl << "Empty Queue" << endl;
    }
    else
    {
        cout << endl << "Front -> " << Front;
        cout << endl << "Elements -> ";
        for(i = Front; i != Rear; i= (i+1) % SIZE)
        {
            cout << a[i] << "\t";
        }
        cout << a[i];
        cout << endl << "Rear -> " << Rear;
    }
}

int CircularQueue :: Size()
{
    if(Rear >= Front)
    {
        return (Rear - Front) + 1;
    }
    else
    {
        return (SIZE - (Front - Rear) + 1);
    }
}

// the main function
int main()
{
    CircularQueue cq;
    cq.enQueue(10);
    cq.enQueue(100);
    cq.enQueue(1000);
    
    cout << endl << "Size of queue: " << cq.Size();
    
    cout << endl << "Removed element: " << cq.deQueue();
    
    cq.Display();
    
    return 0;
}

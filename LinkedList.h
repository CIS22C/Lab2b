#ifndef LinkedList.h
#define LinkedList.h



template <class T>
struct Node {
  T data;
  Node <T>* pointer;
  
}




class LinkedList{
private:
Node <T>* head;     //pointer to first node
int count;          // no of nodes in the list



public:
  //constructor & destructor
  LinkedList();
  ~LinkedList();
  
  
  //functions
  
  //add an item to list
 template <class T>
 void LinkedList<T> :: addAnywhere(<T> data, int n){
      //create new node and initialize
      Node<T>* temp1 = new Node<T>();
      temp1->data=data;
      temp1->pointer=null; 
        
      
      if(n==1){
        temp1->pointer = head;
        head = temp1;
        return;
      }
        
      Node<T>* temp2 = head;
       for(int i = 1; i<n; i++){
         temp2=temp2->pointer;
       }
         temp1->pointer=temp2->pointer;
         temp2->pointer=temp1;   
 } ;
  
       
    //delete/remove node
    bool remove(int position)
	{
		//initialize current 
		Node<T>* current = nullptr;


		
			//Removing node at beginning of chain
			if (position == 1)
			{
			
				current = head->pointer;
				head = head->pointer;
			}

			//Remove node on any index after 1
			else
			{
				// create a nodepointer pointing to the node to be deleted
				Node<T>* previous = getNodeAt(position - 1);

				//this node points to node to delete
				current = previous->pointer;

				//set previous node to point to the node after the one to be deleted
				previous->pointer = current->pointer;
			}

			//delete node from memory
			current->pointer = nullptr;
			delete current;
			current = nullptr;

		}

		
	}

	//Removes the value at first node
	bool removeFirst()
	{
		return remove(1);
	}

         
         };
         
  //Locate a node at nth position   
  template <class T>
  void LinkedList<T> :: findNode(){
    struct Node* current = head;
    int nodecount = 0;
    
    while(current!= NULL){
      if(nodecount == index){
        return(current->data)
      }
      nodecount++;
      current=current->pointer;
    }
  }
      
  
  //get the total items in list
  template <class T>
  int LinkedList<T> :: countItems(){
    return count;
    
  }
      
  //clear the list 
  template <class T>
  bool LinkedList<T> :: EmptyList(Node<T>* c){
    Node<T>* current = head;
    Node<T>* temp;
    while(temp!=null){
      temp = current;
      current = current->next;
      free(temp);
    }
      
  }
  //check if list is empty
  template <class T>
  bool LinkedList<T> :: isEmpty(Node<T>* head){
    return(head == null);
  }
  

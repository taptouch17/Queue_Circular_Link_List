//
//  Queue.hpp
//  Assignment
//
//  Created by Jelani on 11/11/2017.
//
// You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
// copy, modify, and distribute this software in source code or binary form for use
// in connection with any program.
//
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#ifndef CircularLinkList_h
#define CircularLinkList_h

#include <stdio.h>

using namespace std;

class CircularList
{
private:
    
    class Node;
    Node *rear, *front;
    int num_elements = 0;
    
    
public:
    
    void createANode(int value);
    void addAtFront(int value);
    void deleteElement(int value);
    int displayList();
    void addAtBack(int value, int position);
    void deleteEnd();
    
    
    CircularList() {
        front = NULL;
    }
    
   // ~CircularList(); //d'tor
    
    int size(); //tells you the number of items in the ADT
    
    /*
    void enqueue(int k); //inserts item at the back of queue
    
    void dequeue(); //removes an item from the front of the queue
    
    bool isEmpty(); //checks to see if ADT is empty
    
    int front(); //tells us the element at the front of the list without removing it
    
    void clear(); //makes the ADT empty
    
    int displayQueue(); // Displays items in queue
    
    */
};


#endif /* Queue_hpp */

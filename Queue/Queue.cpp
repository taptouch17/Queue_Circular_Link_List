//
//  Queue.cpp
//  Queue
//
//  Created by Jelani on 13/11/2017.
//  Copyright © 2017 Tap. TOUCH. All rights reserved.
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

#include "Queue.h"
#include "CircularLinkList.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int Queue::size() {
    
    cout << "The size of the Queeue is " << List.size() << endl;
    
    return List.size();
    
    
}

void Queue::enqueue(int theValue) {
    
    if (List.size() == 0) {
        List.createANode(theValue);
        return;
    }
    List.addAtBack(theValue, List.size());
}

void Queue::dequeue() {
    
    while (List.size() > 0) {
        List.deleteEnd();
    }
}

int Queue::displayQueue() {
    cout << "The Queue is " << endl;
    return List.displayList();
}

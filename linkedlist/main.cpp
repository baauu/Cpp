#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 
  

void showlist(list <int> myList) 
{ 
    list <int>::iterator it; 
    for(it = myList.begin(); it != myList.end(); ++it) 
        cout << " --> " << *it; 
    cout << '\n'; 
} 

// void selectionSort(list <int> myList) {
  
//   list <int>::iterator it; 
//   for (it = myList.begin(); it != myList.end(); ++it) {
//     index = head->next;
//     for (int j = i+1; j < size; j++) {
//       if (myList[j] < myList[i]) {
        
//       }
//     }
//   }
// }

int main() {
  list <int> myList;

  myList.push_back(5);
  myList.push_back(13);
  myList.push_back(3);
  myList.push_back(28);
  myList.push_back(16);

  cout << "Our list:" <<endl; 
  showlist(myList);
  cout << endl;

  cout << "Sorted list:"  <<endl; 
  myList.sort();
  showlist(myList);
  
  
  

  
}
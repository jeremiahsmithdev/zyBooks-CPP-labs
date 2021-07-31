#include <iostream>
#include <vector>
using namespace std;

int main(){

    //Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
    //square bracket is used
    //You don't have to specify the size of the array. But if you don't, it will only be as big as the elements that are inserted into it:
    
    string cars[] = {"Volvo", "BMW", "Brio", "Amaze"};
    cout << cars[3];

    cars[0] = "Creta";
    cout << cars[0];

    for(int i = 0; i < 4; i++) {
        cout << cars[i] << "\n";
    }

    //If you specify the size however, the array will reserve the extra space:
    string cars1[5] = {"Volvo", "BMW", "Ford"}; // size of array is 5, even though it's only three elements inside it

    //It is also possible to declare an array without specifying the elements on declaration, and add them later:
    string cars2[5];
    cars2[0] = "Volvo";
    cars2[1] = "BMW";

    //Vectors in C++ are sequence containers representing arrays that can change in size.
    /*
    Vectors in C++ are the dynamic arrays that are used to store data. Unlike arrays, which are used to store sequential data 
    and are static in nature, Vectors provide more flexibility to the program. Vectors can resize itself automatically when 
    an element is inserted or deleted depending on the need of the task to be executed. It is not the same in an array where 
    only a given number of values can be stored under a single variable name.

    */

   vector<int> my_vector1;
   //https://www.edureka.co/blog/vectors-in-cpp/

   //vector< object_type > variable_name;
   std::vector<int> my_vector2;
   //A blank vector is being created. Vector is a dynamic array and, doesn’t needs size declaration.
  
   /*A Vector container in STL provides us with various useful functions.
    Modifiers
    Iterators
    Capacity
   */

    /*
    Modifiers
    push_back(): The function pushes the elements into a vector from the back. If the type of object passed as a parameter in the push_back() is not same as that of the vector an exception is thrown.
    assign(): It assigns a new value to the vector elements by replacing old ones.
    pop_back(): The pop_back() function is used to pop or remove elements from a vector from the back. It reduces the size of the vector by one element.
    insert(): This function inserts new elements before the element before the position pointed by the iterator. We can also pass a third argument count, that counts the number of times the element is to be inserted before the pointed position.
    erase(): erase() function is used to remove elements from a container from the specified position or range. We can either pass the position of the specific elements needs need to remove or we can pass the starting point and endpoint of a range of elements. 
    swap(): swap() function is used to swap the contents of one vector with another vector of the same type. Sizes may differ.

    Iterators
    begin(): This function returns an iterator pointing to the first element in the vector.
    end(): The end() function returns an iterator pointing to the last element in the vector.

    Capacity
    size(): This function returns the number of elements in the vector.
    max_size(): The max_size() function returns the maximum number of elements that the vector can hold.
    capacity(): The capacity() function returns the size of the storage space currently allocated to the vector expressed as number of elements based on the memory allocated to the vector.
    resize(): This function resizes the container so that it contains ‘n’ elements. If the current size of the vector is greater than n then the back elements are removed from the vector and id the current size is smaller than n then extra elements are inserted at the back of the vector.
    empty(): Returns whether the container is empty, it return true if vector is empty else returns false.
    */

   // Assign vector 
    vector<int> vec; 
   
    // fill the array with 12 seven times 
    vec.assign(7, 12); 
   
    cout << "The vector elements are: "; 
    for (int i = 0; i < 7; i++) 
        cout << vec[i] << " "; 
   
    // inserts 24 to the last position 
    vec.push_back(24); 
    int s = vec.size(); 
    cout << "nThe last element is: " << vec[s - 1]; 
 
     // prints the vector 
    cout << "nThe vector elements after push back are: "; 
    for (int i = 0; i < vec.size(); i++) 
    cout << vec[i] << " "; 
   
    // removes last element 
    vec.pop_back(); 
   
    // prints the vector 
    cout << "nThe vector elements after pop_back are: "; 
    for (int i = 0; i < vec.size(); i++) 
        cout << vec[i] << " "; 
   
    // inserts 10 at the beginning 
    vec.insert(vec.begin(), 10); 
   
    cout << "nThe first element after insert command is: " << vec[0]; 
   
    // removes the first element 
    vec.erase(vec.begin()); 
   
    cout << "nThe first element after erase command is: " << vec[0]; 
   
    // inserts at the beginning 
    vec.emplace(vec.begin(), 5); 
    cout << "nThe first element emplace is: " << vec[0]; 
   
    // Inserts 20 at the end 
    vec.emplace_back(20); 
    s = vec.size(); 
    cout << "nThe last element after emplace_back is: " << vec[s - 1]; 
   
    // erases the vector 
    vec.clear(); 
    cout << "nVector size after clear(): " << vec.size(); 
   
    // two vector to perform swap 
    vector<int> obj1, obj2; 
    obj1.push_back(2); 
    obj1.push_back(4); 
    obj2.push_back(6); 
    obj2.push_back(8); 
   
    cout << "nnVector 1: "; 
    for (int i = 0; i < obj1.size(); i++) 
        cout << obj1[i] << " "; 
   
    cout << "nVector 2: "; 
    for (int i = 0; i < obj2.size(); i++) 
        cout << obj2[i] << " "; 
   
    // Swaps obj1 and obj2 
    obj1.swap(obj2); 
   
    cout << "nAfter Swap nVector 1: "; 
    for (int i = 0; i < obj1.size(); i++) 
        cout << obj1[i] << " "; 
   
    cout << "nVector 2: "; 
    for (int i = 0; i < obj2.size(); i++) 
        cout << obj2[i] << " ";

    //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    //Iterators
    vector<int> vec2; 
   
    for (int i = 1; i <= 10; i++) 
        vec2.push_back(i); 
   
    cout << "Understanding begin() and end() function: " << endl; 
    for (auto i = vec2.begin(); i != vec2.end(); ++i) 
        cout << *i << " ";

    //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    //capacity
    vector<int> vec3; 
   
    for (int i = 1; i <= 10; i++) 
        vec3.push_back(i); 
   
    cout << "Size of our vector: " << vec3.size(); 
    cout << "nCapacity of our vector: " << vec3.capacity(); 
    cout << "nMax_Size of our vector: " << vec3.max_size(); 
   
    // resizes the vector size to 4 
    vec3.resize(4); 
   
    // prints the vector size after resize() 
    cout << "nSize of our vector after resize: " << vec3.size(); 
   
    // checks if the vector is empty or not 
    if (vec3.empty() == false) 
        cout << "nVector is not empty"; 
    else
        cout << "nVector is empty"; 

}

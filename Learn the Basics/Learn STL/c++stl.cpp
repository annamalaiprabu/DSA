#include <bits/stdc++.h>
using namespace std;
//Learn pairs before learning containers, pairs are a part of utility library
void learnPair(){
    pair <int , int> p = {1,3}; //Syntax for a pair, it can store different datatypes also as given below
    pair <char, float> q = {'a',2.5}; //Used to store a pair of values (it can store more, we'll learn below)
    //cout << p.first << '\t' << p.second << '\n'; //Syntax for accessing the values in a pair 
    //cout << q.first << '\t' << q.second << '\n';
    pair <int, pair <int, int>> r = {3,{6,9}}; //Syntax for storing more than 2 values in a pair using Nested Pairs
    //cout << r.first << '\t' << r.second.first << '\t' << r.second.second << '\n';
    pair <int,int> arr[] = {{1,3},{4,5},{6,9}};// As pair is a datatype itself we can have pair arrays
    //cout << arr[1].first;//It prints 4 here as the indexing as usual starts from 0 and we can't directly access arr[1] but can only access one value at a time
}
void learnVector(){
    vector <int> v; // Syntax for Vectors
    v.push_back(9); // Used to add an element to the vector and increase the size of the vector to accomodate the new element 
    //cout << v[0] << '\t' << v.at(0) << '\t';// We can print out the elements similar to arrays only but v.at(0) is redundant now, use array method only
    v.emplace_back(12); // Use this instead of push_back as its much faster
    //cout << v[1] << '\n';
    vector <pair <int,int>> v1;// Creating a vector pair 
    v1.push_back({2,4});// The syntax for push_back is different to the syntax of emplace_back
    v1.emplace_back(5,7); // as emplace_back requires no curly braces, directly inside the curved braces is enough 
    //cout << v1[0].first << '\t' << v1[0].second << '\t' << v1[1].first << '\t' << v1[1].second << '\n'; //Printing the elements of vector pair
    vector <int> v2(5); //Creates vector of 5 spaces filled with 0 or some garbage value depending on the compiler and yes, it's size can be increased later
    vector <int> v3(5,20); //here in each space there is 20 filled as printed below
    /*for(int i=0;i<5;i++){
        cout << v3[i] << '\t';
    }*/
    vector <int> v4(v3); //To copy the contents of a vector onto another vector;
    /*for(int i=0;i<5;i++){
        cout << v4[i] << '\t';
    }*/
    vector <int> v5 = {2,4,6,8,10}; //assigning values to vector similar to array
    /*for(int i=0;i<5;i++){
        cout << v5[i] << '\t';
    }*/
    vector <int>::iterator it1 = v5.begin(); // Syntax for begin iterator (it1 is just a name of the iterator), it points to the memory address of the first element of the vector and stores the mem add in it1
    // cout << *(it1) << '\t'; // Printing first element by accessing the data at the memory address using dereference operator
    it1++;
    //cout << *(it1) << '\t';
    it1 = it1 + 2;
    //cout << *(it1) << '\t';
    vector <int>::iterator it2 = v5.end(); // It points to one memory address after the memory address of the last element 
    it2--;
    //cout << *(it2) << '\t';
    //now reduntant but just know it
    //vector <int>::iterator it3 = v5.rbegin(); //it points to the MA of the last element's MA and iterates in reverse order from right to left
    //vector <int>::iterator it4 = v5.rend();// it points to the MA in front of the first element's MA and iterates in the reverse order, we'll try out both of their implementation below after learning a few more printing related stuff
    //cout << v5.back();//it accesses the last element of the vector
    /*for(vector <int>::iterator it3 = v5.begin(); it3!= v5.end(); it3++){//using for loop and iterator to print the elements of the vector
        //cout << *(it3) << '\t';
    }*/
    /*for(auto it5 = v5.begin(); it5 != v5.end(); it5++){ //The auto keyword is used when you don't know the datatype, C++ will automatically assign the datatype from the data given to it like fot e.g. auto a = "heyy", a will automatically be assigned the string datatype
        cout << *(it5) << '\t';
    }*/
    /*for(auto it6 : v5){ //for each loop using auto, it follows the same syntax for arrays also, just array name like here just vector name, here it6 is an integer datatype as the elements of the vector here are integers and it6 is not an iterator so we can directly print it6 itself for the req values 
        cout << it6 << '\t';
    }*/
    /*for(int it7 : v5){ //prev one is way better, just to understand the prev one's working I've given this here
        cout << it7 << '\t';
    }*/
    //v5={2,4,6,8,10}
    v5.erase(v5.begin()+1); //to delete a single element from the vector use erase fn
    /*for(auto it8 : v5){
        cout << it8 << '\t'; //now v5={2,6,8,10}
    }*/
    vector <int> v6 = {2,4,6,8,10};
    v6.erase(v6.begin()+1,v6.begin()+3); // to delete a range of values in vector use this syntax where vector_name(loc_of_start,loc_of_ending_delete+1) i.e. for the end of the range you give one more than the last element to be deleted in the range
    /*for(auto it8 : v6){
        cout << it8 << '\t'; //now v5={2,6,8,10}
    }*/
    vector <int> v7(2,100); // v7={100,100}, this syntax is used to create a vector with identical values
    /*for(auto x: v7){
        cout << x << '\t';
    } 
    cout << '\n';*/
    v7.insert(v7.begin()+1,10); // v7={100,10,100}, this syntax is used to insert a single element at a specific position and therefore dynamically also increase the size of the vector
    /*for(auto x: v7){
        cout << x << '\t';
    }
    cout << '\n';*/ 
    v7.insert(v7.begin()+2,2,20); // v7={100,10,20,20,100}, this syntax is used to insert the same element but many times like twice or thrice and therefore dynamically also increase the size of the vector
    /*for(auto x: v7){            // the general thumb rule is first is the place you want to enter, if there are 2 numbers after the position the rightmost is the element to be inserted  and the number to the left of that is the number of times that element needs to be inserted
        cout << x << '\t';
    } 
    cout << '\n';*/
    vector <int> hey(4,21); //hey={21,21,21,21}
    vector <int> bye(3,22); //bye={22,22,22}
    bye.insert(bye.begin(),hey.begin(),hey.end()); //bye= {21,21,21,21,22,22,22} //here we are inserting into bye, we are inserting hey completely from begin to end, we can also only insert only a part of the vector by changing the 2nd and 3rd parameter of the bye.insert() function
    /*for(auto x: bye){
        cout << x << '\t';
    }
    cout << '\n';*/
    cout << bye.size() << '\n'; //gives the size of the vector
    v7.pop_back(); // deletes the last element of the vector, before deletion v7={100,10,20,20,100}
    /*for(auto x: v7){
        cout << x << '\t';
    }
    cout << '\n';*/ // after deletion v7={100,10,20,20,100}
    vector <int> vec1(2,8); // vec1 ={8,8}
    vector <int> vec2(3,9); // vec2 = {9,9}
    vec1.swap(vec2); //swaps the elements of both the vectors
    /*for(auto x: vec1){ // after swap vec1 ={9,9,9} and vec2 = {8,8}
        cout << x << '\t';
    }
    cout << '\n';
    for(auto x: vec2){
        cout << x << '\t';
    }
    cout << '\n';*/
    vec1.clear(); //erases the entire vector and leaves us with an empty vector
    /*cout << vec1.empty() << '\n'; //if vector is empty, gives us 1
    cout << vec2.empty() << '\n'; // if vector is not empty, gives us 0*/ 
}
void learnList(){
    list <int> l1={3,5}; // l1={3,5} In vector we use a SLL, in list we use a DLL, so they both are very similar except that here in list we can also perform front operations
    /*for(auto y:l1){
        cout << y << '\t';
    }
    cout << '\n';*/
    l1.push_back(6); // l1={3,5,6}
    /*for(auto y:l1){
        cout << y << '\t';
    }
    cout << '\n';*/
    l1.emplace_back(8);// l1={3,5,6,8} //don't get confused with pair vectors as we can only emplace_back 1 element at a time in lists as well as vectors
    /*for(auto y:l1){
        cout << y << '\t';
    }
    cout << '\n';*/
    l1.push_front(9);// l1={9,3,5,6,8} we can also place elements in the front using insert function in vectors, but this is way more costlier in complexity than push or emplace front, hence when front operations are involved we can prefer to use list itself
    /*for(auto y:l1){
        cout << y << '\t';
    }
    cout << '\n';*/
    l1.emplace_front(10);// l1={10,9,3,5,6,8}
    /*for(auto y:l1){
        cout << y << '\t';
    }
    cout << '\n';*/
    //begin,end,rebegin,rend,insert,swap,size,clear, and all the operations of the vector are implemented the same way in list
}
void learnDeque(){
    deque <int> dq;
    dq.emplace_back(5); //dq={5}
    dq.push_back(8); //dq={5,8}
    dq.emplace_front(9); //dq={9,5,8}
    dq.push_front(10); //dq={10,9,5,8}
    dq.pop_back();//dq={10,9,5}
    dq.pop_front();//dq={9,5}
    /*for(auto x: dq){ //print statement for checking the inner working of a deque
        cout << x << '\t';
    }*/
    //If you insert and/or remove elements often at the beginning and the end of a sequence, you should use a deque.
    //If you insert, remove, and move elements often in the middle of a container, consider using a list.
    cout << dq.front() << '\t' << dq.back(); //front() refers to the first element of the container and back() function refers to the last element of the container; front() and back() can also be used in vectors and lists 
    //rest functions same as vector only
    //swap, size, begin, end, rend, rbegin, clear, insert
}
void learnStack(){

    stack <int> st; //folows LIFO, it has only 3 main generic operations, push or emplace, pop and top
    st.push(5); //st={5}
    st.push(12); //st={12,5}
    st.emplace(9); //st={9,12,5}
    st.emplace(14); //st={14,9,12,5}
    st.pop(); //st={9,12,5}
    cout << st.top() << '\n'; // 9
    st.pop(); //st={12,5}
    cout << st.size() << '\n'; // 2
    cout << st.empty() << '\n'; // returns 0 as not empty
    stack <int> st1,st2; //syntax for creating 2 stacks at a time, can be used for vectors,lists and deques as well
    stack <int> st_dupe;
    st.swap(st_dupe);
    //all operations have O(1) complexity
    //printing stacks is not the same as vectors, queues and lists
    //indexing of elements is not allowed like vectors, queues and lists to access and print easily
    //will learn later how to print stacks
}
void learnQueue(){
    queue <int> q;
    q.push(3); // q = {3}
    q.push(8); // q = {3,8}
    q.emplace(9); // q = {3,8,9}
    q.back() += 5; // q = {3,8,14}
    cout << q.back() << '\t'; //prints 14
    cout << q.front() << '\t'; //prints 3
    q.pop(); // q = {8,14} as FIFO
    cout << q.front() << '\t'; //prints 8 
    //3 main functions as stack i.e. push, pop and top
    //size, swap and all other operations similar to stack only
    //here also all the operations have a time complexity of O(1)
}
void learnPriorityQueue(){
    priority_queue <int> pq;
    pq.push(4); //pq={4}
    pq.push(22); //pq={22,4}
    pq.emplace(9); //pq={22,9,4} here it arranges the greatest element on the top of the queue and so on, for strings it is arranged in lexicographical order
    cout << pq.top() << '\t'; // prints 22
    pq.pop(); // pq = {9,4} ; here this queue also has a tree data structure in it
    cout << pq.top() << '\t'; //now prints 9 
    // here no front() and back() functions like queue as ig because it is implemented through a tree
    // also called as max heap
    //size(),swap(),empty() same function as others
    priority_queue <int, vector <int>, greater <int>> pq1; //syntax for minimum heap, i.e. will keep the minimum element on top
    pq1.push(23); //pq1={23}
    pq1.push(19); //pq1={19,23}
    pq1.emplace(21); //pq1={19,21,23}
    cout << pq1.top() << '\t'; // prints 19
    pq1.pop(); //pq1={21,23}
    cout << pq1.top() << '\t'; //prints 21
    //push() and pop() have time complexities of O(logn) and top() has O(1)
}
void learnSet(){
    set <int> s; //it is an interesting DS which is UNIQUE and SORTED, it also uses a tree DS
    s.insert(2); // s={2}, we are showing it like this for us to understand it easily till we learn trees
    s.insert(4); // s={2,4}
    s.emplace(3); // s={2,3,4}
    s.emplace(4); // // s={2,3,4} as UNIQUE
    auto it1 = s.find(2); // here a iterator is assigned to the address of 2 in the set
    auto it2 = s.find(7); // here no iterator is assigned as 7 is not present in the set
    //begin(), end(), rbegin(), size() used similar to vector only
    //size(), clear(), empty() and similar functions are used in the same manner as used in vectors
    auto cnt = s.count(3); // here if the element is present in the set then the value is 1 and if not then 0
    cout << cnt << '\t';
    auto it3 = s.find(2);
    s.erase(it3); // s={3,4} this erases 2 using iterator in constant time 
    s.erase(3); // s={4}, this erases 3 in logarithmic time
    set <int, greater <int>> s2 = {24,52,112,12,9,8};// this is used to sort the set in descending order i.e. s2={112,52,24,12,9,8}
    set <int> s3 = {2,4,6,8,10};
    auto it4 = s3.find(4);
    auto it5 = s3.find(8);
    //s3.erase(it4,it5); // s3 = {2,8,10} as erase works like [start,end)
    //all the operations here are in logarithmic time
    auto it6 = s3.lower_bound(4);
    //cout << *(it6) << '\t';
    auto it7 = s3.upper_bound(8);
    //cout << *(it7) << '\t';
    //syntax for lower bound and upper bound in sets
}
void lowerBoundandUpperBoundConcept(){
    int sorted_arr[]={1,2,3,4,5}; //as we can use binary search only for sorted arrays
    int n=(sizeof(sorted_arr)/sizeof(sorted_arr[0]));
    bool res_of_search = binary_search(sorted_arr , sorted_arr + n , 2); // a and a+n are the iterators between which the element is searched where n is the size of the array, 3 is the element to be searched
    cout << res_of_search << '\n';
    bool res_of_search_1 = binary_search(sorted_arr , sorted_arr + n , 6);
    cout << res_of_search_1 << '\n';
    int arr[] = {1,4,5,6,9,9};
    int sizeofarr = sizeof(arr)/sizeof(arr[0]);
    //lower bound function behaves similar to binary search
    //lower bound ideally returns an iterator but to get the index of the array subtract the array(which is actually not the array but refers to the 1st iterator itself) from the lower bound
    int hi = lower_bound(arr,arr + sizeofarr, 4) - arr; //it points to the position of 4 which is in index 1 
    cout << hi << '\t';
    int hi1 = lower_bound(arr, arr + sizeofarr, 7) - arr; //as no 7, it points to the position just next to the greater number than it, that is to the position of the first 9 i.e. 4
    cout << hi1 << '\t';
    int hi2 = lower_bound(arr, arr + sizeofarr, 10) - arr;// as no 10, it points to the second 9 as both the first and second 9 are equal, it moves till the next greater element and points at index 6 even if it is out of the array
    cout << hi2 << '\t';
    //vector <int> vec_1;
    //int search_ele; // some random element to be searched in the vector
    //syntax to use lower bound function in vectors
    //int hi_vec_1 = lower_bound(vec_1.begin(),vec_1.begin() + vec_1.end(),search_ele) - vec_1.begin();
    //upper bound function also behaves similar to binary search
    int hi3 = upper_bound(arr,arr + sizeofarr, 4) - arr; //it points to the position of next to 4 which is 5 which is in index 2 
    cout << hi3 << '\t';
    int hi4 = upper_bound(arr, arr + sizeofarr, 7) - arr; //as no 7, it points to the position just next to the greater number than it, that is to the position of the first 9 i.e. 4
    cout << hi4 << '\t';
    int hi5 = upper_bound(arr, arr + sizeofarr, 10) - arr;// as no 10, it points to the position after the second 9 as both the first and second 9 are equal
    cout << hi5 << '\t';
    //vector <int> vec_2;
    //int search_ele_2; // some random element to be searched in the vector
    //syntax to use upper bound function in vectors
    //int hi_vec_2 = upper_bound(vec_2.begin(),vec_2.begin() + vec_2.end(),search_ele_2) - vec_2.begin();
}
void learnMultiset(){
    //same as set but a catch here, it is sorted but not unique i.e. will take in duplicate elements also
    multiset <int> ms;
    ms.insert(1); //ms={1}
    ms.insert(1); //ms={1,1}
    ms.emplace(1); //ms={1,1,1}
    ms.emplace(2); //ms={1,1,1,2}
    int cnt = ms.count(1);
    cout << cnt << '\t'; // prints 3 as 3 occurrence
    ms.erase(1); // ms={2}, it erases all ocurrences of 1
    cnt = ms.count(1);
    cout << cnt << '\t'; // prints 0
    multiset <int> ms1 = {1,1,1,2};
    //to delete only one instance of 1 we use the line below-
    //ms1.erase(ms1.find(1)); //deletes the first instance of 1
    //ms1.erase(ms1.find(1),ms1.find(1)+2); //to delete a range of values from [start,end)
    }
void learnUnorderedSet(){
    //it is the same as set except that here the elements are not sorted and are in a random order
    //also we can use all the functions used in set except lower bound & upper bound functions
    //it's complexity is most of the time is O(1) but in the worst case complexity scenario, which occurs once in a blue moon is O(n)
    unordered_set <int> us;
}
void learnMap(){
    //map has a unique key for every value, see Raj example in notes
    //these keys are stored in a sorted order similar to sets
    map <int,int> m1;
    map <int, pair<int,int>> m2; //here the key is an integer type and the values are a pair of integers
    map <pair <int,int>, int> m3; //here the key is a pair of integers and the value is a single integer
    m1[1] = 2; // this syntax means on the key 1, pls store the value 2 and it is stored first in the DS
    m1.emplace(3,1); // here at key 3, value 1 is placed and as done earlier for emplace no need of those curly braces inside the round braces like insert
    m1.insert({2,5}); // here at key 2, value 5 is placed; see the NB for the visual representation now
    m3[{2,3}]=7; // syntax for m3 type
    //to print the elements of a pair we can use 2 syntaxes as used earlier below-
    //first syntax is using for loop and an iterator from m1.begin() till !=end(), it++ and print *(it)
    //second syntax is much easier, is by using a for each loop and an iterator and, printing the iterator directly
    for(auto it : m1){
        cout << it.first << '\t' << it.second << '\n';
    }
    cout << '\n';
    /*
          o\p 1 2
          2 5
          3 1
    */
    cout << m1[1] << '\t' << m1[3] << '\t' << m1[5] ; //it prints the values 2  1  0 as they are stored respectively in the keys 1 and 3 and there is nothing assigned to the key 5, so it prints NULL i.e. represented by 0    
    auto it1 = m1.find(3);
    /*cout << *(it1).second << '\n'; //debug this later it is supposed to print 1*/
    auto it2 = m1.find(3); // and nothing as such is there it points to the end, that is a place after the map
    // similar to lower bound and upper bound studied before
    auto it3 = m1.lower_bound(2);
    auto it4 = m1.upper_bound(3);
    // erase, swap, size, empty are as same as above
    //works in O(logn) time
}
void multimap(){
    //here everything same as map except that you can have duplicate keys (similar to the differences between set and multiset)
    //also m1[key] cannot be used here as it won't be valid as there might be duplicate keys so the ambiguity of which value to access arises
}
void learnUnorderedmap(){
    //same as map except not sorted and in a random order (similar to the differences between set and unorderedset)
    //works in O(1) and in worst case which happens once in a blue moon is O(n)
}
void learnExtra(){
    /*int n;
    n=6;
    int a[n]={6,4,3,1,5,2};
    sort(a,a+n); //sorts the entire array in ascending order;
    int b[n]={6,4,3,1,5,2};
    sort(b+2,b+n); //to sort only from 3 to the end
    sort(b,b+n,greater<int>); //to sort in descending order and greater<int> is an inbuilt comparator which automatically does this work
    //most of the times we will be sorting in our own way this can be done using defining our own comparator which is basically a boolean so can return only a true or false
    pair <int,int> c[3] = {{1,2},{2,1},{4,1}};
    //now I want to sort it in a way such that the pairs must be arranged in a way such that the second elements are in ascending order
    //if the second elements are the same, then the first element of the pair is checked and they must be arranged in descending order
    bool comp(pair <int,int> p1, pair <int,int> p2){
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false;
        // so the only condition left is p1.second==p2.second
        if(p1.first > p1.second) return true;
        return false;
    }
    //so while working with comparators as done above don't concentrate on the whole array but only on the logic for two elements(datatypes) like for pairs pair 1 and pair 2
    sort(c,c+3,comp); //to sort using the comparator's logic and c[3] = {{4,1},{2,1},{1,2}}
    */
    int num = 7; //in binary 7 is 111
    int cnt = __builtin_popcount(num);//it will return the number of set bits(i.e. turned on bits which is represented by 1) of the integer number in binary and 
    long long int num1 = 11134893470240;
    cout << cnt << '\n';
    int cnt1 = __builtin_popcountll(num1);//extra ll for long
    cout << cnt1 << '\n';
    //to print or even find out all the permutations of a string we can use the following trick 
    string s = "123";
    do{
        cout << s << '\n';
    }while(next_permutation(s.begin(),s.end()));
    //but if we did as given below
    string s1 = "312";
    do{
        cout << s1 << '\n';
    }while(next_permutation(s1.begin(),s1.end())); // we would only get 312(existing permutation) and 321 and then it returns false as it goes in an ascending order
    //so it is very important to sort the string using sort function like sort(s.begin(),s.end()); first if you want all the permutations possible as it travels in an ascending proper order 
    //int max = max_element(a,a+n); for max element 
    //int min_element(a,a+n); for min element
}   
int main(){
    //learnPair();
    //learnVector();
    //learnList();
    //learnDeque();
    //learnStack();
    //learnQueue();
    //learnPriorityQueue();
    //learnSet();
    //learnMultiset();
    //lowerBoundandUpperBoundConcept();
    //learnUnorderedSet;
    //learnMap();
    //learnMultimap();
    //learnUnorderedmap();
    //learnExtra();
    return 0;
}
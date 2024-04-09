# PUSH_SWAP
Making a sorting program. The program takes a set of integer values as an input. 2 stacks are allowed to use for the sorting.
<br/><br/>
![push_swap_visualizer](https://github.com/unow0517/42_push_swap/blob/main/push_swap_visualizer.gif)

[Push_swap visualizer](https://github.com/o-reo/push_swap_visualizer) helped me to test my program, which saved big amount of time!
<br/><br/>

## Must Know
* ***Stack*** : A Stack is an **abstract data type** that serves as a collection of of elements with two main operations:

&nbsp;&nbsp;&nbsp;*Push*, which adds an element to the collection, 

&nbsp;&nbsp;&nbsp;*Pop*, which removes the most recently added element.[^1] (In my push_swap program, *push b* refers to *"push first element of a to b then pop a"* )

&nbsp;&nbsp;&nbsp; In this project, we are allowed to implement and use *rotate* operation, which swaps first element and last element in a stack, as well as *reverse rotate*.

<br/>

* ***Abstract data type*** : contrast to data structure. How the data is implemented is not defined.

&nbsp;&nbsp;&nbsp;For example, a stack has push/pop operations that follow a Last-In-First-Out rule, and can be concretely implemented using either a list or an array (**the list or the array is data structure in this case**).[^2]

&nbsp;&nbsp;&nbsp;Data structures serve as the basis for abstract data types (ADT). The ADT defines the logical form of the data type. The data structure implements the physical form of the data type.

* **Time Complexity** : the time complexity is the computational complexity that describes the amount of computer time it takes to run an algorithm. [^3]
&nbsp;&nbsp;&nbsp;Higher time complexity does not mean that it takes longer to compute, actual compute time is machine-dependent. Instead of measuring actual time required in executing each statement in the code, Time Complexity considers how many times each statement executes.[^4]
<br/><br/>
## Key Point
* It was difficult for me to figure out how to start to build sorting algorithm! Just start with sorting 2 or 3 integers.
* many different algorithms have been invented by smart people. I chose a proper one (radix sort) and tried to implement with my code.
* I tried first with array, but hard to implement so I used linked list in the end. Code got more complicated when I use array.

### Pros and Cons of Array and List[^4]

|Array|List|
|---|---|
| Arrays are stored in continuous location<br/>(only pointer to pointer is stored in continuous location<br/> if you use array of pointers instead of 2 dimensional array) | Linked List is not stored in cnotinuous location |
| Fixed in size | Dynamic in Size |
| Memory is allocated in compile time | Memory is allocated in run time |
| Use less memory | use more memory to store content and address of next node |
| Elements can be access easily | Element accessing requires the traversal of whole list |
| Insertion, deletion takes longer time | Insertion, deletion is faster |

[^1]: [wikipedia](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))
[^2]: [wikipedia](https://en.wikipedia.org/wiki/Data_structure)
[^3]: [Wikipedia](https://en.wikipedia.org/wiki/Time_complexity)
[^4]: [Geeksforgeeks](https://www.geeksforgeeks.org/understanding-time-complexity-simple-examples/)
[^5]: [Geeksforgeeks](https://www.geeksforgeeks.org/linked-list-vs-array/)

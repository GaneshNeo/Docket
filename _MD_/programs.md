# C Program

> To view the programs go to [Docket](https://github.com/GaneshNeo/Docket.git)

> ## Conditional Statements

1. Number of coins for N cents
2. Odd or Even
3. Leap year
4. Swap without third variable
5. Swap 2 numbers
6. Swap second and last digit of a number

> ## loops

1. Amstrong number
2. Binary Addition
3. Fibbonacci Series
4. Sum of N Numbers
5. Sum of Odd Numbers upto N
6. Sum of Even Numbers upto N
7. Print leap years between Intervals
8. Perfect Number Between Intervals
9. Odd or Even Numbers in N Numbers
10. Sum of Digits
11. Unique Number 
12. Stock Price

> ## Array

1. Common Elements in 3 Sorted Arrays
2. Missing Number
3. Most Frequent Elements
4. Sum of possible pair for given resultant
5. Drop Least Value element in an Array
6. Merge Two Arrays
7. Array -> Two sub Array with same sum
8. Reverse array in place

> ## Structures

1. Student Details
2. Student Details - DMA

> ## Strings

1. Capitalize Repetitive Characters
2. Compare Two strings
3. Frequency of Characters
4. Longest Word in a sentence
5. Reverse only the Aplha - Characters in string
6. Reverse String Preserving the positions
7. String Compare
8. string reverse
9. change position of first two words to Last
10. Remove consecutive Vowels in a String
11. Vowels -> Upper && Consonants -> Lower 
12. Sum of Odd And Even Digits - String

> ## Miscellaneous

1. Z - Interview MCQ's
2. Hello World
3. To be Downloaded
4. Programs
5. Readme
6. Security
7. Sanjana
8. .vscode

> ## Binary
1. Binary Addition
2. Unequal bits of Two Binary Numbers
3. Given Binary Value is Set or not - Logically

> ## Complex
1. Write a program to find frequency of migrating
birds sighting. You have been asked to help study the population of birds migrating across th continent. Each type of bird you are interested in will be identified by an integer value. Each time a particular kind of birds is spotted, it's ID number will be added to your array of sighting. You would like to alble to find out which type of bird is most commom given a list of sightings. Your tasks is to print the type number of that word and if two or more types of birds are equally common, choose the type with the samllest ID number.
       
For Example, assume your birds sightings are of types
arr=[1,1,2,2,3]. There aretwo of types 1 and 2, and one sighting of type 3. Pick the lower of two types seen twice: type 1.

Input Format
The first line contains an integer denoting n, the number of birds sighted and reported in the array arr.
The second line describes arr as n space-seperated integers representing the type numbers of each birds sighted.
Constrains: 5 <=n <= 2* 10 * 5
It is guaranteed that each type is 1, 2, 3,4 or 5.
Output Format
Print the type number of the most common bird; if teo or more types of birds are equally common, choose the type with the smallest ID number.
Sample Input 0

6

1 4 4 4 5 3

Sample Output 0

4

Explanation 0

The different types of birds occur in the following frequencies:

Type 1: 1 bird

Type 2: 0 birds

Type 1: 1 bird

Type 2: 0 birds

Type 1: 1 bird

The type number that occurs at the highest frequency is type 4, so we printf 4 as our answer.


> ## Pattern

1.      1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
    
2.      5 4 3 2 1
        4 3 2 1
        3 2 1 
        2 1
        1

3.              1
              1   1
            1   2   1
          1   3   3   1
        1   4   6   4   1

4.      5 4 3 2 1 1 2 3 4 5
        4 3 2 1     1 2 3 4
        3 2 1         1 2 3
        2 1             1 2
        1                 1
        1                 1
        1 2             2 1
        1 2 3         3 2 1
        1 2 3 4     4 3 2 1
        1 2 3 4 5 5 4 3 2 1

5.      A
        A B
        A B C
        A B C D
        A B C D E
        
6.      1
        2 7  
        3 8  13 
        4 9  14 19
        5 10 15 20 25

7.        #       #
           #     #
            #   #
             # #
              #
             # #
            #   #
           #     #
          #       #


8.      #           #
        ##         ##
        ###       ###
        ####     ####
        #####   #####
        ###### ######
        #############
        ###### ######
        #####   #####
        ####     ####
        ###       ###
        ##         ##
        #           #


> # Python Tutor

        Singly Linked List Implementation Structures Static Memory

1. [Example 1](http://pythontutor.com/c.html#code=%23include%3Cstdio.h%3E%0A%23include%3Cstdlib.h%3E%0A%0Astruct%20node%20%7B%0A%20%20int%20value%3B%0A%20%20struct%20node%20*next%3B%0A%7D%3B%0A%0Atypedef%20struct%20node%20node_t%3B%0A%0Avoid%20printlist%28node_t%20*head%29%0A%7B%0A%20%20node_t%20*temporary%3Dhead%3B%0A%20%20%0A%20%20while%28temporary%20!%3D%20NULL%29%0A%20%20%7B%0A%20%20%20%20printf%28%22%25d%20-%20%22,temporary-%3Evalue%29%3B%0A%20%20%20%20temporary%3Dtemporary-%3Enext%3B%0A%20%20%7D%0A%20%20printf%28%22%5Cn%22%29%3B%0A%7D%0A%0A%0Aint%20main%28%29%0A%7B%0A%20%20node_t%20n1,n2,n3%3B%0A%20%20node_t%20*head%3B%0A%20%20%0A%20%20n1.value%20%3D%2045%3B%0A%20%20n2.value%20%3D%208%3B%0A%20%20n3.value%20%3D%2032%3B%0A%20%20%0A%20%20//%2032-8-45%0A%20%20%0A%20%20head%3D%26n3%3B%0A%20%20n3.next%3D%26n2%3B%0A%20%20n2.next%3D%26n1%3B%0A%20%20n1.next%3DNULL%3B%0A%20%20%0A%20%20printlist%28head%29%3B%0A%20%20%0A%20%20return%200%3B%0A%7D&mode=edit&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D)

2. [Example 2](http://pythontutor.com/c.html#code=%23include%3Cstdio.h%3E%0A%23include%3Cstdlib.h%3E%0A%0Astruct%20node%20%7B%0A%20%20int%20value%3B%0A%20%20struct%20node%20*next%3B%0A%7D%3B%0A%0Atypedef%20struct%20node%20node_t%3B%0A%0Avoid%20printlist%28node_t%20*head%29%0A%7B%0A%20%20node_t%20*temporary%3Dhead%3B%0A%20%20%0A%20%20while%28temporary%20!%3D%20NULL%29%0A%20%20%7B%0A%20%20%20%20printf%28%22%25d%20-%20%22,temporary-%3Evalue%29%3B%0A%20%20%20%20temporary%3Dtemporary-%3Enext%3B%0A%20%20%7D%0A%20%20printf%28%22%5Cn%22%29%3B%0A%7D%0A%0Aint%20main%28%29%0A%7B%0A%20%20node_t%20*n1,n2,n3%3B%0A%20%20node_t%20*head%3B%0A%20%20%0A%20%20n1%3Dmalloc%28sizeof%28node_t%29%29%3B%0A%20%20%0A%20%20n1-%3Evalue%20%3D%2045%3B%0A%20%20n2.value%20%3D%208%3B%0A%20%20n3.value%20%3D%2032%3B%0A%20%20%0A%20%20//%2032-8-45%0A%20%20%0A%20%20head%3Dn1%3B%0A%20%20n3.next%3DNULL%3B%0A%20%20n2.next%3D%26n3%3B%0A%20%20n1-%3Enext%3D%26n2%3B%0A%20%20%0A%20%20printlist%28head%29%3B%0A%20%20%0A%20%20return%200%3B%0A%7D&mode=edit&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D)

        Singly Linked List Implementation Structures Dynamic Memory

3. [Example 1](http://pythontutor.com/c.html#code=%23include%3Cstdio.h%3E%0A%23include%3Cstdlib.h%3E%0A%0Astruct%20node%20%7B%0A%20%20int%20value%3B%0A%20%20struct%20node%20*next%3B%0A%7D%3B%0A%0Atypedef%20struct%20node%20node_t%3B%0A%0Avoid%20printlist%28node_t%20*head%29%0A%7B%0A%20%20node_t%20*temporary%3Dhead%3B%0A%20%20%0A%20%20while%28temporary%20!%3D%20NULL%29%0A%20%20%7B%0A%20%20%20%20printf%28%22%25d%20-%20%22,temporary-%3Evalue%29%3B%0A%20%20%20%20temporary%3Dtemporary-%3Enext%3B%0A%20%20%7D%0A%20%20printf%28%22%5Cn%22%29%3B%0A%7D%0A%0A%0Anode_t%20*create_new_node%28int%20value%29%0A%7B%0A%20%20node_t%20*result%3Dmalloc%28sizeof%28node_t%29%29%3B%0A%20%20result-%3Evalue%3Dvalue%3B%0A%20%20result-%3Enext%3DNULL%3B%0A%20%20return%20result%3B%0A%7D%0Aint%20main%28%29%0A%7B%0A%20%20node_t%20*tmp%3B%0A%20%20node_t%20*head%3B%0A%0A%20%20tmp%3Dcreate_new_node%2832%29%3B%0A%20%20head%3Dtmp%3B%0A%20%20tmp%3Dcreate_new_node%282%29%3B%0A%20%20tmp-%3Enext%3Dhead%3B%0A%20%20head%3Dtmp%3B%0A%20%20tmp%3Dcreate_new_node%289%29%3B%0A%20%20tmp-%3Enext%3Dhead%3B%0A%20%20head%3Dtmp%3B%0A%20%20%0A%20%20printlist%28head%29%3B%0A%20%20%0A%20%20return%200%3B%0A%7D&mode=edit&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D)

4. [Example 4](http://pythontutor.com/c.html#code=%23include%3Cstdio.h%3E%0A%23include%3Cstdlib.h%3E%0A%0Astruct%20node%20%7B%0A%20%20int%20value%3B%0A%20%20struct%20node%20*next%3B%0A%7D%3B%0A%0Atypedef%20struct%20node%20node_t%3B%0A%0Avoid%20printlist%28node_t%20*head%29%0A%7B%0A%20%20node_t%20*temporary%3Dhead%3B%0A%20%20%0A%20%20while%28temporary%20!%3D%20NULL%29%0A%20%20%7B%0A%20%20%20%20printf%28%22%25d%20-%20%22,temporary-%3Evalue%29%3B%0A%20%20%20%20temporary%3Dtemporary-%3Enext%3B%0A%20%20%7D%0A%20%20printf%28%22%5Cn%22%29%3B%0A%7D%0A%0A%0Anode_t%20*create_new_node%28int%20value%29%0A%7B%0A%20%20node_t%20*result%3Dmalloc%28sizeof%28node_t%29%29%3B%0A%20%20result-%3Evalue%3Dvalue%3B%0A%20%20result-%3Enext%3DNULL%3B%0A%20%20return%20result%3B%0A%7D%0Aint%20main%28%29%0A%7B%0A%20%20node_t%20*tmp%3B%0A%20%20node_t%20*head%3DNULL%3B%0A%0A%0A%20%20for%28int%20i%3D0%3Bi%3C%3D5%3Bi%2B%2B%29%0A%20%20%7B%0A%20%20%20%20tmp%3Dcreate_new_node%28i%29%3B%0A%20%20%20%20tmp-%3Enext%3Dhead%3B%0A%20%20%20%20head%3Dtmp%3B%0A%20%20%7D%0A%20%20%0A%20%20printlist%28head%29%3B%0A%20%20%0A%20%20return%200%3B%0A%7D&mode=edit&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D)

5. Token Number using Linked List - DS

        Binary Tree
6. [Example 5](http://pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%23include%20%3Cstdlib.h%3E%0A%0Astruct%20node%20%7B%0A%20%20int%20item%3B%0A%20%20struct%20node*%20left%3B%0A%20%20struct%20node*%20right%3B%0A%7D%3B%0A%0A//%20Inorder%20traversal%0Avoid%20inorderTraversal%28struct%20node*%20root%29%20%7B%0A%20%20if%20%28root%20%3D%3D%20NULL%29%20return%3B%0A%20%20inorderTraversal%28root-%3Eleft%29%3B%0A%20%20printf%28%22%25d%20-%3E%22,%20root-%3Eitem%29%3B%0A%20%20inorderTraversal%28root-%3Eright%29%3B%0A%7D%0A%0A//%20Preorder%20traversal%0Avoid%20preorderTraversal%28struct%20node*%20root%29%20%7B%0A%20%20if%20%28root%20%3D%3D%20NULL%29%20return%3B%0A%20%20printf%28%22%25d%20-%3E%22,%20root-%3Eitem%29%3B%0A%20%20preorderTraversal%28root-%3Eleft%29%3B%0A%20%20preorderTraversal%28root-%3Eright%29%3B%0A%7D%0A%0A//%20Postorder%20traversal%0Avoid%20postorderTraversal%28struct%20node*%20root%29%20%7B%0A%20%20if%20%28root%20%3D%3D%20NULL%29%20return%3B%0A%20%20postorderTraversal%28root-%3Eleft%29%3B%0A%20%20postorderTraversal%28root-%3Eright%29%3B%0A%20%20printf%28%22%25d%20-%3E%22,%20root-%3Eitem%29%3B%0A%7D%0A%0A//%20Create%20a%20new%20Node%0Astruct%20node*%20createNode%28value%29%20%7B%0A%20%20struct%20node*%20newNode%20%3D%20malloc%28sizeof%28struct%20node%29%29%3B%0A%20%20newNode-%3Eitem%20%3D%20value%3B%0A%20%20newNode-%3Eleft%20%3D%20NULL%3B%0A%20%20newNode-%3Eright%20%3D%20NULL%3B%0A%0A%20%20return%20newNode%3B%0A%7D%0A%0A//%20Insert%20on%20the%20left%20of%20the%20node%0Astruct%20node*%20insertLeft%28struct%20node*%20root,%20int%20value%29%20%7B%0A%20%20root-%3Eleft%20%3D%20createNode%28value%29%3B%0A%20%20return%20root-%3Eleft%3B%0A%7D%0A%0A//%20Insert%20on%20the%20right%20of%20the%20node%0Astruct%20node*%20insertRight%28struct%20node*%20root,%20int%20value%29%20%7B%0A%20%20root-%3Eright%20%3D%20createNode%28value%29%3B%0A%20%20return%20root-%3Eright%3B%0A%7D%0A%0Aint%20main%28%29%20%7B%0A%20%20struct%20node*%20root%20%3D%20createNode%281%29%3B%0A%20%20insertLeft%28root,%202%29%3B%0A%20%20insertRight%28root,%203%29%3B%0A%20%20insertLeft%28root-%3Eleft,%204%29%3B%0A%0A%20%20printf%28%22Inorder%20traversal%20%5Cn%22%29%3B%0A%20%20inorderTraversal%28root%29%3B%0A%0A%20%20printf%28%22%5CnPreorder%20traversal%20%5Cn%22%29%3B%0A%20%20preorderTraversal%28root%29%3B%0A%0A%20%20printf%28%22%5CnPostorder%20traversal%20%5Cn%22%29%3B%0A%20%20postorderTraversal%28root%29%3B%0A%7D&mode=edit&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D)

> To view the programs go to [Docket](https://github.com/GaneshNeo/Docket.git)

> To view my profile go to [Ganesh Neo](https://github.com/GaneshNeo)
    
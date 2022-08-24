# C - Search Algorithms:

**Resources:**

* [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
* [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)

**Learning objectives:**

* What is a ``search algorithm``
* What is a ``linear search``
* What is a ``binary search``
* What is the best search algorithm to use depending on your needs

## Environment
 
* Language: C
* Operating System: Ubuntu 20.04 LTS
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)
* Compiler: gcc 
 > **Note:** The code will be compiled using the options: -Wall -Werror -Wextra -pedantic -std=gnu89

**More Info:**

```
You will be asked to write files containing big O notations. Please use this format:

O(1)
O(n)
O(n!)
n*m -> O(nm)
n square -> O(n^2)
sqrt n -> O(sqrt(n))
log(n) -> O(log(n))
n * log(n) -> O(nlog(n))
…
```

## Description of each file:

| Files          |Desription
|:----------------|:-------------------------------:|
|0-linear.c | Write a function that searches for a value in an array of integers using the Linear search algorithm
|1-binary.c | Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
|2-O | What is the time complexity (worst case) of a linear search in an array of size n?
|3-O | What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?
|4-O | What is the time complexity (worst case) of a binary search in an array of size n?
|5-O | What is the space complexity (worst case) of a binary search in an array of size n?
|6-O | Big O answer of a certain algorithm
|100-jump.c | Write a function that searches for a value in a sorted array of integers using the Jump search algorithm
|101-O | What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?
|102-interpolation.c |Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm
|103-exponential.c | Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm
|104-advanced_binary.c |You may have noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem.
|105-jump_list.c |You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a singly linked list.
|106-linear_skip.c |As you see now, looking for a specific value in a singly linked list always leads to browse every element of the list. A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an “express lane” to browse it. 
|107-O |What is the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)?
|108-O |What is the time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)?

## Authors :pen:

* [Agustin Flom](https://www.linkedin.com/in/agustin-f/)

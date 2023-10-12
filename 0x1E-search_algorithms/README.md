# 0x1E. C - Search Algorithms

A search algorithm is a method or a set of rules used to systematically find specific items or information within a collection of data. In the context of software engineering, search algorithms are frequently used to locate data within data structures like arrays, lists, or databases. These algorithms are essential for various tasks, such as searching for a specific element in an array, finding information on the internet, or optimizing the retrieval of data from large datasets.

There are various search algorithms, each with its own characteristics and efficiency.

## Linear Search:
This is the simplest search algorithm.
It works by sequentially checking each element in the data structure until a match is found.
If the element is found, the algorithm returns the index or position of that element; otherwise, it returns that the element is not in the collection.
Linear search has a time complexity of O(n), where 'n' is the number of elements in the data structure. This means it may take longer for larger datasets.

## Binary Search:

Binary search is a more efficient algorithm but has certain requirements.
It can only be applied to sorted data.
It works by repeatedly dividing the data into two halves and comparing the target element with the middle element.
If the middle element matches the target, the search is successful.
If not, the algorithm continues in the half where the target is likely to be found.
Binary search has a time complexity of O(log n), making it much faster than linear search for large datasets.

In this project, I implemented various types of search algorithms and stated the corresponding space/time complexities for each.


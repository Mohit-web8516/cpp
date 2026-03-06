/*What is a set?
A set stores unique elements in sorted order (ascending by default).

Internally, it is implemented as a balanced BST (Red-Black Tree).

Operations like insertion, deletion, and search are O(log n).

Duplicate values are not allowed (for duplicates, use multiset).

⚡ Key Functions
Function	Description
insert(x)	Adds element x (ignored if already present)
size()	Returns number of elements
empty()	Checks if set is empty
count(x)	Returns 1 if x exists, else 0
find(x)	Returns iterator to element if found
erase(x)	Removes element x
clear()	Removes all elements
begin() / end()	Iterators for traversal
lower_bound(x)	First element ≥ x
upper_bound(x)	First element > x*/
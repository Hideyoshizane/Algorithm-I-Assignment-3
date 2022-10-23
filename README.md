# Algorithm I - Assignment 3

This assignment objective was the pratice of Dynamic programming using C++.<br>
The cenario was the implementantion of a optimized path on a apple farm.<br>
Using Dynamic programming, it is possible to find the path that collect the biggest amount of apples.<br>

The Algorithm is below:<br>
* Given a N x M matrix, the algorithm run throught each matrix cell, adding the biggest value from the adjacent cells from the line above. The below image show a example:<br>
![alt text](https://github.com/Hideyoshizane/Algorithm-I-Assignment-3/blob/main/image%201.png?raw=true)<br>
* After finding the biggest value, a function is called to find the index where this value came from.<br>
* This index is saved in a temporary matrix that store the indexes, making a path.<br>
* After run through all cells of the matrix, a fuction is used to find the biggest value from the last line of the matrix.<br>
* Using the same function to find the index, we have the total amount of apples and where it came from.<br>
* Going the path maded from the indexes stored on the temporary matrix, we can determine the path that colect the most apples, just like the imagem below.<br>
![alt text](https://github.com/Hideyoshizane/Algorithm-I-Assignment-3/blob/main/image%202.png?raw=true)
* Storing this indexes from the temporary matrix to a vector, we have the complete path, but reversed. We reverse this vector and the final path is found.

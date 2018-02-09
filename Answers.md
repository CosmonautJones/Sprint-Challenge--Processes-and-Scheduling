1.


2. 


3.  I know that the `printf` call should be faster, because `printf` buffers its output. That being, it stores its result in a memory buffer. I read that the `printf` uses the `write` call, but only when the buffer is full. I actually tested the two calls myself in the folder labeled _**Question3Test**_. I iterated the each of the calls 3,000,000 times within a timer function. and got some interesting results:
    - printf() took 0.985171 seconds to execute
    - write() took 3.901143 seconds to execute

4.
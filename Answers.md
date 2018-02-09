1.


2. There are 5 states in which a process can be in at any point in time. Which are:
    - **Created**-  the initial state when a process is first started or created.
    - **Ready**- where the process is waiting to be assigned to a processor. Ready processes are waiting to have the processor allocated to them by the Scheduler so that they can run. A process could come into this state after the **Start** state or while running it by but interrupted by the Scheduler to assign CPU to some other process where it will be set back into the Queue.
    - **Running**- after the Process has been assigned to a processor by the Scheduler, and the Process state is set to running when the CPU executes its instructions within the Process.
    - **Blocked**- the Process will move into the waiting state if it needs to wait for a resource, such as waiting for user input, a device to be plugged in, or waiting for a file to become available.
    - **Exit**- after the process finishes its execution, or it is terminated by the Scheduler, it is moved to the terminated state where it waits to be removed from main memory.


3. I actually tested the two calls myself in the folder labeled _**Question3Test**_. I iterated the each of the calls 3,000,000 times within a timer function. and got some interesting results:
    - printf() took 0.985171 seconds to execute
    - write() took 3.901143 seconds to execute

4. The `printf()` call should be faster because `printf()` buffers its output. That being, it stores its result in a memory buffer. The `printf()` my use the `write()` call, but only when the buffer is full. The `write()` is a fairly expensive call, much more expensive than copying data into `printf()`'s buffer, so reducing the number of write calls provides a net performance win.
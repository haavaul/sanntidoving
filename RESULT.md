# Reasons for concurrency and parallelism


To complete this exercise you will have to use git. Create one or several commits that adds answers to the following questions and push it to your groups repository to complete the task.

When answering the questions, remember to use all the resources at your disposal. Asking the internet isn't a form of "cheating", it's a way of learning.

 ### What is concurrency? What is parallelism? What's the difference?
 >	Concurrency: when two or more tasks can start, run and complete 
 	Parallellism: when two or more tasks runs at the same time or several parts of one task run at the
 	same time using one core at each sub-task
 	Difference is that concurrency actually run tasks at the same time
 problems
 ### Why have machines become increasingly multicore in the past decade?
 > 	By upping the number of cores, the performance of the CPU can be raised without having to raising
 	the clock speed since clock speed has reached a problematic point (due to i.e. heat and clos)
 
 ### What kinds of problems motivates the need for concurrent execution?
 (Or phrased differently: What problems do concurrency help in solving?)
 > 	Concurrency help solve problems with errors in data integrity and consistency problems like lost
 	updates, uncommited data, and inconsistent retrievals
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 (Come back to this after you have worked on part 4 of this exercise)
 > 	Concurrent programs can make programmers life easier as they can  do several tasks at the same time
 	It is making life harder as it makes the program more complex. You can do more complex stuff, but
 	it makes the code more complex. I will say both

 ### What are the differences between processes, threads, green threads, and coroutines?
 > 	Process: OS-managed, exists within their own adress space
 	Thread: OS-managed within same adress space as the parent and all its other threads. need for
 	system calls or blocking calls when switching in concurrency)
 	Green thread: User-space projections of same concept as threads, but not OS-managed. 
 	Coroutines: Cooperative multitasked (no need for system calls or blocking calls when switching in
 	concurrency)
 
 ### Which one of these do `pthread_create()` (C/POSIX), `threading.Thread()` (Python), `go` (Go) create?
 >  Thread

 ### How does pythons Global Interpreter Lock (GIL) influence the way a python Thread behaves?
 > 	GIL is a lock that only allows one thread to hold control of the Python interpreter
 
 ### With this in mind: What is the workaround for the GIL (Hint: it's another module)?
 > Using more processeces instead of threads
 
 ### What does `func GOMAXPROCS(n int) int` change? 
 > 	It sets the maximum number of CPUs that can be executing simultaneously
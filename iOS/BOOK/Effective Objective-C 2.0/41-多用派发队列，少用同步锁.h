同步块@synchronized(self){}，自动创建锁并等待块中的代码执行完毕。共用一个锁的同步块必须按照顺序执行
在队列中，栅栏块(Barrier Block)必须单独执行，不能与其他块并行。串行队列中的块总是按顺序逐个执行的，并发队列如果发现栅栏块，会一直等当前所有并发块都执行完毕，才会单独执行栅栏块
执行异步派发时，需要拷贝块，所以使用同步队列及栅栏块，可以令同步行为更高效

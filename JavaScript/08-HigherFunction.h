// JavaScript的函数其实都指向某个变量。既然变量可以指向函数，函数的参数能接收变量，那么一个函数就可以接收另一个函数作为参数，这种函数就称之为高阶函数。

// map()方法定义在JavaScript的Array中，我们调用Array的map()方法，传入我们自己的函数，就得到了一个新的Array作为结果
map()

// reduce()把一个函数作用在这个Array的[x1, x2, x3...]上，这个函数必须接收两个参数，reduce()把结果继续和序列的下一个元素做累积计算，其效果就是：[x1, x2, x3, x4].reduce(f) = f(f(f(x1, x2), x3), x4)
reduce()

// filter()把Array的某些元素过滤掉，然后返回剩下的元素.传入的函数依次作用于每个元素，然后根据返回值是true还是false决定保留还是丢弃该元素。
filter()

// Array的sort()方法默认把所有元素先转换为String再排序,sort()方法会直接对Array进行修改，它返回的结果仍是当前Array
sort()
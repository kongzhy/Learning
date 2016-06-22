// 在一个对象中绑定函数，称为这个对象的方法。

// 在一个方法内部，this是一个特殊变量，它始终指向当前对象.

// 如果以对象的方法形式调用，比如xiaoming.age()，该函数的this指向被调用的对象，也就是xiaoming，这是符合我们预期的。如果单独调用函数，比如getAge()，此时，该函数的this指向全局对象，也就是window。

// ECMA决定，在strict模式下让函数的this指向undefined

// 要指定函数的this指向哪个对象，可以用函数本身的apply方法，它接收两个参数，第一个参数就是需要绑定的this变量，第二个参数是Array，表示函数本身的参数。
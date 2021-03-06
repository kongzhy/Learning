Objective-C
OC使用消息结构(message structure)而不是函数调用(function calling)
C使用静态绑定(static binding)，OC为C语言添加了面向对象特性，是其超集，使用动态绑定(dynamic binding)的消息结构，运行时才会去检查接收消息的对象类型，查找所要执行的方法
OC的重要工作都由运行时组件(runtime component)而非编译器完成
对象所占内存总是分配在堆中(heap),不会分配到栈上(stack)。分配在堆中的内存必须直接管理，而分配在栈中的内存则会自动清理
与创建结构体相比，创建对象还需要额外开销(分配及释放堆内存)

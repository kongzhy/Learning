OC的动态消息系统的工作方式决定了其不可能实现真正的私有方法或私有实例变量
Class-Continuation分类必须定义在其所接续的类的实现文件里，这是唯一能声明实例变量的分类
如果某属性在头文件中声明为只读，而类的内部又要用设置方法修改属性，需要在Class-Continuation分类中扩展，既能令外界无法修改对象，又能在其内部按照需要管理数据
如果想使类所遵循的协议不为人知，可于Class-Continuation分类中声明
.mm扩展名表示编译器应该将此文件按Objective-C++来编译

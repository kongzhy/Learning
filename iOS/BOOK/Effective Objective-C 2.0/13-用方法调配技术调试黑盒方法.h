Method Swizzling
在运行期，可以向类中新增或替换选择子所对应的方法实现
使用另一份实现来替换原有的方法实现，叫做方法调配
一般来说，只有调试程序的时候才需要在运行期修改方法实现，不易滥用
类的方法列表会把选择子的名称映射到相关的方法实现上，使得动态消息派发系统能够据此找到应该调用的方法。这些方法均以函数指针的形式来表示，这种指针叫IMP，原型为: id (*IMP)(id, SEL, ...)
+ (void)load {
    Method method1 = class_getInstanceMethod(self, @selector(lowercaseString));
    Method method2 = class_getInstanceMethod(self, @selector(jdp_lowercaseString));
    method_exchangeImplementations(method1, method2);
}

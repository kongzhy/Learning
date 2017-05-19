Message Forwarding
在编译期向类发送了其无法解读的消息并不会报错，因为在运行期可以继续向类中添加方法
当对象接受到无法解读的消息后，就会启动消息转发，消息转发分为三步:
1动态方法解析，征询接受者所属类能否动态添加方法，处理未知选择子(前提:已有方法实现，运行时动态添加)
+ (BOOL)resolveClassMethod:(SEL)sel;
+ (BOOL)resolveInstanceMethod:(SEL)sel;
2备援接受者，征询接受者所属类能否将消息转发给其他接受者
- (id)forwardingTargetForSelector:(SEL)aSelector;
3完整消息转发
- (NSMethodSignature *)methodSignatureForSelector:(SEL)aSelector;
- (void)forwardInvocation:(NSInvocation *)anInvocation;

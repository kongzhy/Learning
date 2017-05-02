+ (id)sharedInstance {
    static JDPObject *sharedInstance = nil;
    @synchronized(self) {
        if (!sharedInstance) {
            sharedInstance = [[self alloc] init];
        }
    }
    return sharedInstance;
}

+ (instancetype)sharedInstance {
    static JDPObject *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[self alloc] init];
    })
    return sharedInstance;
}

只需执行一次的线程安全代码，通过GCD的dispatch_once函数实现
标记应该声明在static或global作用域中

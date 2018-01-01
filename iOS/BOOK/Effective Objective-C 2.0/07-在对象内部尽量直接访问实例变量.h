iVar
在对象内部，读取实例变量时直接访问，设置实例变量时通过属性访问

直接访问实例变量不经过OC的方法派发(method dispatch)，速度较快
直接访问实例变量不会调用设置方法，绕过了为属性所定义的内存管理语义
直接访问实例变量不会触发键值观察(Key-Value Observing, KVO)
通过属性访问有助于断点调试

在初始化方法及dealloc方法中应该直接访问实例变量
如果使用了惰性初始化则必须通过属性访问

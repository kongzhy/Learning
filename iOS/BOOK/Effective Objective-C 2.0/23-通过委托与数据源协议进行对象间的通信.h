委托协议名通常是在相关类名后面加上Delegate一词
委托模式为对象提供了一套接口，使其可由此将相关事件告知其他对象
将委托对象应该支持的接口定义成协议，在协议中把可能需要处理的事件定义成方法
如果有必要，可实现含有位段的结构体，将委托对象是否能响应相关协议方法这一信息缓存至其中

分类机制常用于向无源码的既有类中新增功能
将分类方法加入类中这一操作是在运行期系统加载分类时完成的。运行期系统会把分类中所实现的每个方法都加入类的方法列表中。如果方法重名，那么分类中的方法会覆盖原来那一份实现
添加分类时，应给其名称和方法名加上前缀

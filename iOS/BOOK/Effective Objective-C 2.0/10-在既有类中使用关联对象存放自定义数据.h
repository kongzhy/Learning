Associated Object
可以通过关联对象机制来把两个对象连接起来
设置关联对象值时，使用静态全局变量做键
void objc_setAssociatedObject(id object, void * key, id value, objc_AssociationPolicy policy)
id objc_getAssociatedObject(id object, void * key)
void objc_removeAssociatedObjects(id object)


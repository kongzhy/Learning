Property
属性是OC的一项特性，用于封装对象中的数据。通过实例变量(iVar)来实现。
编译器会自动写出一套存取方法(setter/getter)，用以访问给定类型中具有给定名称的变量，此过程叫自动合成(autosynthesis),由编译器在编译期完成，所以编辑器里看不到合成方法的源代码。
除了生成方法代码之外，编译器自动向类中添加适当类型的实例变量，并且在属性名前加下划线，作为实例变量的名字。也可以在类的实现代码里通过synthesize语法指定实例变量的名字。
若不想令编译器自动合成存取方法，则可以自己实现。如果只实现了其中一个存取方法，那么另外一个还是会由编译器来合成。
@dynamic关键字，用于通知编译器：不要自动创建实现属性所用的实例变量，也不要为其创建存取方法，而且编译时不会报错。
属性特性(property attribute)  原子性:atomic/nonatomic  读写权限:readwrite/readonly  内存管理:assign/strong/weak/copy/unsafe_unretained 方法名:getter/setter
开发iOS程序时应该使用nonatomic属性，因为atomic属性会严重影响性能。

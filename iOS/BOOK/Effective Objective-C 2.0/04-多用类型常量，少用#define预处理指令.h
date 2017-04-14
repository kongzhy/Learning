不要使用#define预处理指令定义常量，因为不含类型信息，编译器只是会在编译前据此执行查找和替换操作。即使有人重新定义了常量值，编译器也不会产生警告。
若不打算公开常量，则应将其定义在使用该常量的实现文件中。使用static const来定义只在编译单元内可见的常量。由于此类常量不在全局符号表中，所以无须为其名称加前缀，在其前加字母k
eg. static const NSTimeInterval kAnimationDuration = 0.3
外界可见的常值变量需放在全局符号表中，以便可以在定义该常量的编译单元之外使用，需要加前缀。在头文件中使用extern声明，在实现文件中定义。
eg. extern NSString *const JDPStringConstant;
    NSString *const JDPStringConstant = @"JDPStringConstant";

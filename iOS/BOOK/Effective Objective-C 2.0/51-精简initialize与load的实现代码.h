对于加入运行期系统的每个类及分类，一定会调用load方法，而且仅调用一次
如果类和分类都定义了load方法，先调用类里的，再调用分类里的
在load方法中使用其他类是不安全的
load方法不参与覆写机制
在分类中编写load方法，用来判断该分类是否已经正确加载
应用程序必须阻塞并等着所有类的load方法都执行完，才能继续
initialize方法会在程序首次使用该类之前调用，而且只调用一次(惰性调用)
initialize方法只应该用来设置内部数据

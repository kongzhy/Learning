// 类：类是对象的类型模板，例如，定义Student类来表示学生，类本身是一种类型，Student表示学生类型，但不表示任何具体的某个学生；
// 实例：实例是根据类创建的对象，例如，根据Student类可以创建出xiaoming、xiaohong、xiaojun等多个实例，每个实例表示一个具体的学生，他们全都属于Student类型。

// JavaScript不区分类和实例的概念，而是通过原型（prototype）来实现面向对象编程。
// JavaScript的原型链和Java的Class区别就在，它没有“Class”的概念，所有对象都是实例，所谓继承关系不过是把一个对象的原型指向另一个对象而已。
// 在JavaScrip代码运行时期，你可以把xiaoming从Student变成Bird，或者变成任何对象。

// 在编写JavaScript代码时，不要直接用obj.__proto__去改变一个对象的原型，并且，低版本的IE也无法使用__proto__。Object.create()方法可以传入一个原型对象，并创建一个基于该原型的新对象，但是新对象什么属性都没有

// JavaScript对每个创建的对象都会设置一个原型，指向它的原型对象。
// 当我们用obj.xxx访问一个对象的属性时，JavaScript引擎先在当前对象上查找该属性，如果没有找到，就到其原型对象上找，如果还没有找到，就一直上溯到Object.prototype对象，最后，如果还没有找到，就只能返回undefined。

// JavaScript还可以用一种构造函数的方法来创建对象,可以用关键字new来调用构造函数，并返回一个对象
// 如果不写new，返回undefined。但是，如果写了new，就变成了构造函数，它绑定的this指向新创建的对象，并默认返回this，不需要在最后写return this;
// 调用构造函数千万不要忘记写new。为了区分普通函数和构造函数，按照约定，构造函数首字母应当大写，而普通函数首字母应当小写，这样，一些语法检查工具如jslint将可以帮你检测到漏写的new。

Window
window对象不但充当全局作用域，而且表示浏览器窗口
window.innerWidth  内部宽度
window.innerHeight 内部高度
window.outerWidth  整个宽度
window.outerHeight 整个高度

Navigator
navigator对象表示浏览器的信息
navigator.appName    浏览器名称
navigator.appVersion 浏览器版本
navigator.language   浏览器设置的语言
navigator.platform   操作系统类型
navigator.userAgent  浏览器设定的User-Agent字符串

Screen
screen对象表示屏幕的信息
screen.width      屏幕宽度，以像素为单位
screen.height     屏幕高度，以像素为单位；
screen.colorDepth 返回颜色位数，如8、16、24。

Location
location对象表示当前页面的URL信息
location.href
location.protocol
location.host
location.port
location.pathname
location.search
location.hash
location.assign() 加载一个新页面
location.reload() 重新加载当前页面

Document
document对象表示当前页面。由于HTML在浏览器中以DOM形式表示为树形结构，document对象就是整个DOM树的根节点
document的title属性是从HTML文档中的<title>xxx</title>读取的，但是可以动态改变
document对象提供的getElementById()和getElementsByTagName()可以按ID获得一个DOM节点和按Tag名称获得一组DOM节点
document对象还有一个cookie属性，可以获取当前页面的Cookie。

Cookie
Cookie是由服务器发送的key-value标示符。因为HTTP协议是无状态的，但是服务器要区分到底是哪个用户发过来的请求，就可以用Cookie来区分。当一个用户成功登录后，服务器发送一个Cookie给浏览器，例如user=ABC123XYZ(加密的字符串)...，此后，浏览器访问该网站时，会在请求头附上这个Cookie，服务器根据Cookie即可区分出用户。

History
history对象保存了浏览器的历史记录
JavaScript可以调用history对象的back()或forward ()，相当于用户点击了浏览器的“后退”或“前进”按钮。
这个对象属于历史遗留对象,任何情况，你都不应该使用history这个对象了。

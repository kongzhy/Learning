// 由于HTML文档被浏览器解析后就是一棵DOM树，要改变HTML的结构，就需要通过JavaScript来操作DOM。

// 更新：更新该DOM节点的内容，相当于更新了该DOM节点表示的HTML的内容；
// 遍历：遍历该DOM节点下的子节点，以便进行进一步操作；
// 添加：在该DOM节点下新增一个子节点，相当于动态增加了一个HTML节点；
// 删除：将该节点从HTML中删除，相当于删掉了该DOM节点的内容以及它包含的所有子节点。

// 由于ID在HTML文档中是唯一的，所以document.getElementById()可以直接定位唯一的一个DOM节点。document.getElementsByTagName()和document.getElementsByClassName()总是返回一组DOM节点。要精确地选择DOM，可以先定位父节点，再从父节点开始选择，以缩小范围。
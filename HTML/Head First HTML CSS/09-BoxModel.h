Box Model
盒模型是CSS看待元素的一种方式
盒模型从内而外，内容区(content area)、内边距(padding)、边框(border)、外边距(margin)
元素的背景颜色或背景图像会延伸到内边距下，但不会延伸到外边距

margin: top right bottom left;
margin: top&bottom right&left;
margin: top&right&bottom&left;

padding: top right bottom left;

border-color
border-style:(solid、double、groove、outset、dotted、dashed、inset、ridge)
border-width:(px、keyword:thin、medium、thick)
border-radius
border:color width style ;(顺序任意)

background-color
background-image: url(path、URL);
background-repeat
background-position
background:color image repeat;

font:font-style font-variant font-weight font-size/line-height font-family
(前三项可选且顺序任意，必须指定字体大小，后面加/接行高)

一个元素不能有多个id，一个页面也不允许多个元素的id相同

一个样式表会覆盖在它上面链接的样式表中的样式

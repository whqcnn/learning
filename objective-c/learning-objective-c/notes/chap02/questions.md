**1**. Where is the dictionary of the head files for the Foundation framework?
(Foundation 框架中的dictionary头文件在哪？）

在Headers目录中（`/System/Library/Frameworks/Foundation.framework/Headers`）

**2**. How many .h files in it? With what Unix commands to check out this?
(在目录下有多少个.h文件？用什么命令来查看它？)

有`140`个.h文件。 `find *.h -type f | wc -l` (此命令只能找当前文件夹下的，不能
找当前文件夹下子目录的）

`grep "" . -r --include=*.{h,c,m,py} | wc -l` (此命令可以找当前及子目录下的所有以.h .c .m .py的文件)


**3**. How many lines in all these .h files? Use what command to check it?
(在这些.h文件中一共有多少行代码？用什么命令来查看它？)

`18304`. `cat find *.h -type f | wc -l`


**4**. What is the same way to do `printf("%d\n", n);` when n is a int variable?
    (在objective-c中和 printf("%d\n", n); 等价的程序语句怎么写？ 这里n是一个整型变量。)

`NSLog(@"%d", n);`


**5**. Like `NSLog()` or `NSString`, lots of classes/functions begin with `NS`. Why? Short for What?
(像`NSLog()`或`NSString`,很多类和函数都以`NS`开头，为什么？是什么意思？)

`Cocoa`对所有的函数、常量和类型名称都添加了`NS`前缀，这个前缀说明函数来自`Cocoa`而不是其他工具包。此工具包还被称为`NextSTEP`, `NS`是它的缩写。苹果公司没有破坏`NextSTEP`编写代码的兼容性，所以继续使用。


**6**. What is the defference between `NSString` and C-style String `char s[] = "hello strings"` ?
（`NSString` 和 `C`风格中的字符串`"hello string"`有什么不同？）

`NSString`元素有许多打包特性：告知其长度；将自身与其它字符串比较；将自身转换为整型值或浮点值等是`C`风格字符串无法实现的。

**7**. What defference between `#include` and `#import` ?
       (`#include`和`#import`有什么区别？）

`#import`可保证文件只被包含一次，而不论此命令实际上在那个文件中出现多少次。而`#include`则无法做到。

**8**. What is the result of the follow code:
      （下面代码的结果是什么：）
```c
#include <stdio.h>
int main()
{
    bool b = 13;
    printf("b = %d\n", b);
}
```

`b = 1`.

**9**. What is the result of the follow code:
      （下面代码的结果是什么：）

```objective-c
BOOL b = 13;
NSLog(@"b = %d", b);
```

`b = 13`

**10**. How many bytes does `int` and `bool` have? Write some code to show it.
        (`int`和`bool`类占多少个字节，编写一些起代码显示它。）

`int`占`4`个字节、`bool`类占`1`个字节。

**11**. How to print `"hello"` and `@" world"` at together with NSLog?
       (如何用`NSLog`一起打印 `"hello"` 和 `@" world"` ）

NSLog(@"\"hello\",@\"world!\"");


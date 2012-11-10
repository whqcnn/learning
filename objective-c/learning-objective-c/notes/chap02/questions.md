1. Where is the dictionary of the head files for the Foundation framework?
    (Foundation 框架中的dictionary头文件在哪？）

    在Headers目录中（`/System/Library/Frameworks/Foundation.framework/Headers`）

2. How many .h files in it? With what Unix commands to check out this?
    (在目录下有多少个.h文件？用什么命令来查看它？)

    有`140`个.h文件。 `find *.h -type f | wc -l`


3. How many lines in all these .h files? Use what command to check it?
    (在这些.h文件中一共有多少行代码？用什么命令来查看它？)

    `18304`. `cat find *.h -type f | wc -l`


4. What is the same way to do `printf("%d\n", n);` when n is a int variable?
    (在objective-c中和 printf("%d\n", n); 等价的程序语句怎么写？ 这里n是一个整型变量。)

    `NSLog(@"%d", n);`

5. Like `NSLog()` or `NSString`, lots of classes/functions begin with `NS`. Why? Short for What? (像`NSLog()`或`NSString`,很多类和函数都以`NS`开头，为什么？是什么意思？)

    (`Cocoa`对所有的函数、常量和类型名称都添加了`NS`前缀，这个前缀说明函数来自`Cocoa`而不是其他工具包。此工具包还被称为`NextSTEP`, `NS`是它的缩写。苹果公司没有破坏`NextSTEP`编写代码的兼容性，所以继续使用。）


6. What is the defference between `NSString` and C-style String `char s[] = "hello strings"` ?

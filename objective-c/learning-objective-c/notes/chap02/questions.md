1. Where is the dictionary of the head files for the Foundation framework?
    (Foundation 框架中的dictionary头文件在哪？）

    在Headers目录中（/System/Library/Frameworks/Foundation.framework/Headers）

2. How many .h files in it? With what Unix commands to check out this?
    (在目录下有多少个.h文件？用什么命令来查看它？)

    有140个.h文件。 sudo find .h -type f | wc -l


3. How many lines in all these .h files? Use what command to check it?
    (在这些.h文件中一共有多少行代码？用什么命令来查看它？)

    18304. cat sudo find .h -type f | wc -l


4. What is the same way to do `printf("%d\n", n);` when n is a int variable?


5. Like `NSLog()` or `NSString`, lots of classes/functions begin with `NS`. Why? Short for What?


6. What is the defference between `NSString` and C-style String `char s[] = "hello strings"` ?

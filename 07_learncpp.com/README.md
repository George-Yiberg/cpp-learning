# 1 Introduce



This directory contains information and codes from https://www.learncpp.com/





# 2 cpp exception

C++ 中没有“空指针异常”之类的东西。您可以捕获的唯一异常是`throw`表达式显式抛出的异常（另外，正如 Pavel 所指出的，一些标准 C++ 异常本质上是由 standard 抛出的`operator new`，`dynamic_cast`等等）。C++ 中没有其他例外。取消引用空指针、除以零等不会在 C++ 中产生异常，它会产生*未定义的行为*。如果您希望在这种情况下引发异常，您自己有责任手动检测这些条件并`throw`明确执行。这就是它在 C++ 中的工作方式。

#include <stdio.h>
#include <ClassA.h>

void ClassA::Func() const
{
    ::printf("ClassA::Func()\n");
}

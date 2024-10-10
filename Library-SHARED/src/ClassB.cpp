#include <stdio.h>
#include <ClassB.h>

void ClassB::Func() const
{
    ::printf("ClassB::Func()\n");
}

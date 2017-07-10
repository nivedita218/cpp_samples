#include <iostream>
#include "StringIntPair.h"
#include "StringStringPair.h"

int main()
{
    StringStringPair ssp;
    ssp.makeKeyValue("A:","Apple");
    ssp.makeKeyValue("B:","Ball");
    ssp.removeKey("A:");
    ssp.concatenateStrings();

    StringIntPair sip;
    sip.makeKeyValue("A:",1);
    sip.makeKeyValue("B:",2);
    //sip.removeKey("B:");
    sip.displayIntandString();

}
#ifndef DLL1_H
#define DLL1_H

extern "C" {
    __declspec(dllexport) void JNICALL Java_org_example_Main_printHello(JNIEnv*, jobject);
}

#endif

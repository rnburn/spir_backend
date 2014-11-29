#ifndef LLVM_SPIR_BITCODE_WRITER_H
#define LLVM_SPIR_BITCODE_WRITER_H

namespace llvm {

class Module;
class raw_ostream;

void WriteSpirBitcodeToFile(const Module* M, raw_ostream &Out);

} //end namespace llvm

#endif //LLVM_SPIR_BITCODE_WRITER_H

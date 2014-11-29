add_library(spir_backend SpirBitcodeWriter.cpp)

target_link_libraries(spir_backend LLVMCore
                                   LLVMSupport
                                   LLVMBitWriter
)

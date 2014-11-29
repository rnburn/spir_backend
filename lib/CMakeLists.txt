add_library(spir_backend BitcodeWriter.cpp)

target_link_libraries(spir_backend LLVMCore
                                   LLVMSupport
                                   LLVMBitWriter
)

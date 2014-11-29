add_executable(spir-as spir-as.cpp)

target_link_libraries(spir-as LLVMAsmParser
                              LLVMBitWriter
                              LLVMCore
                              LLVMSupport
                              spir_backend
)

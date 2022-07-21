# exprtk_test
test example demonstrating an issue we observed when using expression toolkit in our code

This repository contains a project consisting of an executable (exprtk_test) and a library (exprtk_lib) which includes exprTk via git-submodule. When running the executable with memory-leak detection with cmake-build-argument BUILD_SHARED_LIBS=ON, memory leaks are detected. If using BUILD_SHARED_LIBS=OFF no memory leak shows up.

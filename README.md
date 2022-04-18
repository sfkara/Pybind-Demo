# Pybind11 Tutorial 

##  



- Create CmakeLists.txt properly(like as example)
- clone pybind repo to your  main directory of project
```sh
mkdir build
cd buiid
cmake ..
make
```
> Note: .so file and .py file should be same directory or you shouldb import build.module_name instead of import module_name

After building your .so file you can use your module in .py files

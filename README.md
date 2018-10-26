# RBDL TEST

* ROS package example which can work with RBDL Library

## RBDL setup

```sh
wget https://bitbucket.org/rbdl/rbdl/get/0879ee8c548a.zip
unzip 0879ee8c548a.zip
cd rbdl-rbdl-0879ee8c548a
mkdir build
cd build
cmake -D RBDL_BUILD_ADDON_URDFREADER=ON ..
make all
sudo make install
```

* Check the version of rbdl using hash tag

* Hash tag of the current rbdl version is described(2018/10/26)


### MISC. setup for RBDL

* If an error occurs, open rbdl-rbdl-[commit]/addons/urdfreader/urdfreader.cc
* and remove this line
```cpp
#include <ros.h>
```

* If you get an error about the .so file when launching simulation, add the following command to ~/.bashrc
```sh
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib
```



## Acknowledgments

* Thanks for Suhan Park (https://github.com/psh117)


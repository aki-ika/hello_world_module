# hello_world_module
ハローワールドするカーネルモジュール

```bash
make
sudo insmod hello.ko
sudo rmmod hello
sudo dmsg |grep world
[ 5217.586538] hello, world
[ 5221.172269] bye, world
```

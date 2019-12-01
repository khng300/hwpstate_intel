Experimenting Intel Speed Shift on FreeBSD 12
=============================================

Add the following lines to /boot/device.hints: 
```
hint.p4tcc.0.disabled="1"
hint.est.0.disabled="1"
```

Compile the kernel driver by: 
```sh
$ make -C src
```

Install the kernel driver with elevated priviledge:
```sh
$ make -C src install
```

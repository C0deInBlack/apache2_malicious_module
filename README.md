# apache2_malicious_module

Install `apache2-dev`

Compile:

```bash
apxs -c -i poc.c
```
Loading the module:

```bash
LoadModule my_module /path/to/poc.so
```
Now you can transfer the `poc.so` to the target machine. \
Apache2 modules can be found in `/etc/apache2/modules` or `/usr/lib/apache2/modules`. \
To find your module easily you can run the following command in the directories mentioned above:

```bash
find . -mtime 0
```

# Royal Kludge RK68 (BT855) Mechanical keyboard

```
curl -o $HOME/gcc-arm-none-eabi-10-2020-q4-major-x86_64-linux.tar.bz2 -L "https://developer.arm.com/-/media/Files/downloads/gnu-rm/10-2020q4/gcc-arm-none-eabi-10-2020-q4-major-x86_64-linux.tar.bz2?revision=ca0cbf9c-9de2-491c-ac48-898b5bbc0443&la=en&hash=68760A8AE66026BCF99F05AC017A6A50C6FD832A"

cd $HOME
tar xvjf gcc-arm-none-eabi-10-2020-q4-major-x86_64-linux.tar.bz2

export PATH=$HOME/gcc-arm-none-eabi-10-2020-q4-major/bin:$PATH
which -a arm-none-eabi-gcc
cd -

make git-submodule
```

Royal Kludge RK68 (BT855)

Based on Royal Kludge RK61 by: [Diff-fusion](https://github.com/Diff-fusion)
Hardware Supported: SN32F260

Make example for this keyboard (after setting up your build environment):

    make royal_kludge/rk68:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

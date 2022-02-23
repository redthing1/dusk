
![icon](media/icon.png)

# dusk

**dusk**, a library for gba dev

supported toolchains:
- DevkitARM/C/C++ (version 0.1.x), [view](https://github.com/redthing1/dusk/tree/lang_c)
- DevkitARM/D (version 0.2+) [view](https://github.com/redthing1/dusk/tree/d-port)

## example

<img src="media/duskdemo.webp" width="256">
<img src="media/fountain2.webp" width="256">

## features
+ simple, intuitive C/D API
+ library integration
    + built in support for TONC, GBFS
+ graphics
    + scene architecture
    + 8bpp texture atlas packing
    + sprite/animation helpers
    + tiled map exporter and loader
+ (WIP) saves

## hacking

### requirements
+ devkitARM's `gba-dev` ([setup](https://devkitpro.org/wiki/Getting_Started))
+ [Tiled2GBA](https://github.com/LucvandenBrand/Tiled2GBA/tree/master/converter) converter in path as `Tiled2GBA`
+ [crunch](https://github.com/xdrie/crunch) atlas packer in path as `crunch_gen`

### build

enter `demo/DuskDemo` and run:

```sh
make
```

this will output `DuskDemo.gba`, which can be loaded up in your favorite GBA emulator.

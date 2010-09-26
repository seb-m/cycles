#!/usr/bin/env python
from distutils.core import setup, Extension

ext_mod_src = ['cyclesmodule.c']
ext_mod = Extension('cycles', ext_mod_src)

setup(name='cycles',
      ext_modules=[ext_mod])

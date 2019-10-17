L-NIC project custom riscv-opcodes.

Note: For now, only riscv-opcodes and riscv-isa-sim contain custom
forks of the riscv repositories. If you wish to track changes
in riscv-openocd, riscv-pk, or riscv-tests, you will need to fork
the upstream repo and update the firechip submodules first.

riscv-opcodes
===========================================================================

This repo enumerates standard RISC-V instruction opcodes and control and
status registers.  It also contains a script to convert them into several
formats (C, Scala, LaTeX).

This repo is not meant to stand alone; it is a subcomponent of
[riscv-tools](https://github.com/riscv/riscv-tools) and assumes that it
is part of that directory structure.

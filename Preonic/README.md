# Preonic

[OLKB][1] Preonic Rev 3, MX/MIT layout (R3 Tactile Purple Zealios 62g, 78g on 2u).

## Setup:
1. Install Vagrant and any necessary deps.
1. Clone this repo, navigate to this directory.
1. Clone [qmk_firmware][2] to ./qmk_firmware (my fork or upstream).
1. Download flashing tool (e.g. [qmk_toolbox][3] on Windows) to this directory.
1. `vagrant up` and `vagrant ssh` from current directory.
1. `/vagrant/make.sh`.
1. Reset keyboard, flash with latest bin from `./mechie-workman/bin/`.

[1]: https://olkb.com/
[2]: https://github.com/qmk/qmk_firmware/
[3]: https://github.com/qmk/qmk_toolbox

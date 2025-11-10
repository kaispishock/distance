a collection of small c programs that do math.
# contents:
## distance.c
a simple cli tool for calculateing the distance between two points. written in C.
`distance [-h] [x1] [x2] [y1] [y2]`
## quadratic.c
yet another cli tool, this time for solveing quadratics.
# install directions:
## 1. install dependancies
### debian:
install `gcc`.
```sh
sudo apt update; sudo apt install gcc git
```
### fedora/rhel
```sh
sudo dnf install gcc git
```
### arch linux
```sh
sudo pacman -Sy gcc git
```
## 2. clone the repository.
```sh
git clone https://github.com/kaispishock/math
```
## 3. compile the programs
make shure you are in the repo's directory (math/). run `compile.sh`.
```sh
./compile.sh
```
## 4. install into /usr/bin (optional)
run `install.sh` as root.
``` sh
sudo ./install.sh
```

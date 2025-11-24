a collection of small c programs that do math.
# contents:
## Geometry
#### distance.c
a simple cli tool for calculateing the distance between two points. written in C.
`distance [-h] [x1] [x2] [y1] [y2]`
### triangles
#### sides2ifExists
a simple tool that takes the sides of a triangle and determines if it exists.
`sides2ifExists [-h] [mesurement of side 1] [mesurement of side 2] [mesurement of side 3]`
dont't worry about the sides being in the correct order; the program automaticaly sorts them in acending order before gatting the sum of the two least angles and compareing it.
uses the triangle inequality theorem.
## Algebra
### quadratic.c
yet another cli tool, this time for solveing quadratics.
# install directions:
## 1. install dependancies
### debian:
install `gcc` and `git`.
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

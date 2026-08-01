#!/usr/bin/env sh
set -eu

curl -fsSLO https://github.com/doxygen/doxygen/releases/download/Release_1_14_0/doxygen-1.14.0.linux.bin.tar.gz
tar -xzf doxygen-1.14.0.linux.bin.tar.gz

fetch_tag() {
  if ! curl -fsSL "$2" -o "$1"; then
    curl -fsSL "$3" -o "$1"
  fi
}

fetch_tag sead.tag https://docs.nsmbu.net/sead/sead.tag https://nsmbu.github.io/sead/sead.tag
fetch_tag Sys.tag https://docs.nsmbu.net/sys/Sys.tag https://nsmbu.github.io/Sys/Sys.tag
fetch_tag Eft.tag https://docs.nsmbu.net/eft/Eft.tag https://nsmbu.github.io/Eft/Eft.tag
fetch_tag FFL.tag https://docs.nsmbu.net/ffl/FFL.tag https://nsmbu.github.io/FFL/FFL.tag
fetch_tag G3d.tag https://docs.nsmbu.net/g3d/G3d.tag https://nsmbu.github.io/G3d/G3d.tag
fetch_tag Lyt.tag https://docs.nsmbu.net/lyt/Lyt.tag https://nsmbu.github.io/Lyt/Lyt.tag
fetch_tag Snd.tag https://docs.nsmbu.net/snd/Snd.tag https://nsmbu.github.io/Snd/Snd.tag
./doxygen-1.14.0/bin/doxygen ./docs/Doxyfile

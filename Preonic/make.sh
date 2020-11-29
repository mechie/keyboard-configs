#!/bin/bash

if [ $# -ne 2 ]; then
  set -- "/vagrant" "preonic/rev3:mechie-workman"
fi
source_folder="$1/qmk_firmware"
target_folder="$1/${2##*:}"
output_name="$(echo $2 | tr /: _)"

cd "$source_folder" &&
  make "$2" &&
  mv -fv "./$output_name.bin" "$target_folder/$output_name.$(date +"%Y%m%d%H%M%S").bin"

#!/bin/bash

read -p "Git Repo: " git_repo

read -p "Dir Name you want to create&work in: " target_path

read -p "How many exercices you will complete: " exercices

git clone $git_repo $target_path

for ((ex=0; ex<=$exercices; ex++))
do
  newdir=$(printf "ex%02d" "$ex")

  mkdir "$target_path/$newdir"
  echo "Created directory in: $target_path/$newdir"

done

echo "All directories created successfully!"

echo "Directory created at: /$target_path"

#!/bin/sh

ln -sfn ~/42swim/scripts ~/scripts
ln -sfn ~/42swim/dotfiles/.zshrc ~/.zshrc
ln -sfn ~/42swim/dotfiles/.tmux.conf ~/.tmux.conf
ln -s ~/42swim/scripts/c_formatter_42 ~/.local/bin/c_formatter_42

pip3 install --user c_formatter_42

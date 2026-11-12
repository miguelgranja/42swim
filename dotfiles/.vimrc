syntax on
filetype plugin indent on
set tabstop=4
"set shiftwidth=4
"set expandtab
set guioptions-=m
set guioptions-=T
"set relativenumber
set number
set ignorecase
set smartcase
set incsearch
set cinoptions=l1
set modeline
set iminsert=0
set imsearch=0
set autoindent

let mapleader = " "

" Copy the visual selection to the X clipboard
vnoremap <leader>y :w !xclip -i -selection clipboard<CR><CR>

" Copy the whole buffer to the X clipboard
nnoremap <leader>Y :%w !xclip -i -selection clipboard<CR><CR>

" Paste from the X clipboard below the cursor
nnoremap <leader>p :r !xclip -o -selection clipboard<CR>

" Paste from the X clipboard inline, at the cursor
nnoremap <leader>P "=system('xclip -o -selection clipboard')<CR>

#!/bin/bash
LOG=~/.clipboard_history.log
last=""

while true; do
	    current=$(xclip -selection clipboard -o 2>/dev/null)
	        if [[ -n "$current" && "$current" != "$last" ]]; then
			        echo -e "$(date '+%Y-%m-%d %H:%M:%S')\n$current\n" >> "$LOG"
				        last="$current"
					    fi
					        sleep 0.5
					done

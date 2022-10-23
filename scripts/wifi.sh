#!/bin/bash

# Script that outputs the active wifi connections for dwmblocks using nmcli
# Supports spaces on SSIDs and multiple active connections
# Example: 直 Wifi 1 · Wifi 2
# Created by Albert Canales

active_connections=$(nmcli --fields NAME,TYPE connection show --active | tail -n +2)

wifi=""
while IFS= read -r connection; do
	connection=$(echo "$connection" | xargs)
	name=$(echo "$connection" | rev | cut -d' ' -f 2- | rev)
	type=$(echo "$connection" | rev | cut -d' ' -f 1 | rev)
	if [[ $type == wifi ]]; then
		[[ "$wifi" ]] && wifi="${wifi} · "
		wifi="${wifi}${name}"
	fi
done <<< "$active_connections"

[[ "$wifi" ]] && echo "直 $wifi"
#!/bin/bash

# This script reads through requirements.txt and installs each dependency if it’s a recognized package.

echo "Installing dependencies from requirements.txt..."

# Read each line in requirements.txt
while IFS= read -r line
do
    # Skip comments and empty lines
    if [[ $line == \#* ]] || [[ -z $line ]]; then
        continue
    fi
    
    # Attempt to install the package
    echo "Installing $line..."
    if [[ "$line" == "gcc" ]]; then
        sudo apt install -y gcc
    elif [[ "$line" == "make" ]]; then
        sudo apt install -y make
    elif [[ "$line" == "ncurses" ]]; then
        sudo apt install -y libncurses5-dev
    elif [[ "$line" == "sqlite3" ]]; then
        sudo apt install -y libsqlite3-dev
    elif [[ "$line" == "readline" ]]; then
        sudo apt install -y libreadline-dev
    else
        echo "$line is not recognized as a package in this script."
    fi
done < "requirements.txt"

echo "Installation complete!"

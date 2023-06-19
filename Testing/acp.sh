#!/bin/bash
git add . | read -p "Enter your commit message: " message | echo $message > git commit -m "'$message'" | git push

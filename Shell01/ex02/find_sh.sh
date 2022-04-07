find .  -iname "*.sh" -exec sh -c 'echo "$(basename {} .sh)"' \;

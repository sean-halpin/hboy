### Generating Instruction Structs

```
curl https://raw.githubusercontent.com/lmmendes/game-boy-opcodes/master/opcodes.json > /tmp/opcodes
cat /tmp/opcodes| jq '.unprefixed[] | "\(.),\(.length), unknown"' | cat > unprefixed.txt
cat /tmp/opcodes| jq '.cbprefixed[] | "\(.),\(.length), unknown"' | cat > cbprefixed.txt
```
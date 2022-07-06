git clone git@github.com:kostrik/pezos.git &>/dev/null
cd pezos
git log -5 --pretty=%H
cd ..
rm -rf pezos

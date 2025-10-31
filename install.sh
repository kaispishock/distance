# bin/sh
# invaseive ass unix installer for kaispishock/distance. 
# run as root for maximum fuckage.
echo "installing"
pushd ~; git clone https://github.com/kaispishock/distance/
cc main.c -o /usr/bin/distance
chmod 755 /usr/bin/distance
popd; exit

#!/bin/sh
echo 'Removing Package "WUI" ...'
rm /www/cgi-bin/data
rm -rf /usr/lib/lua/wui
rm /etc/config/wui
rm -rf /www/wui
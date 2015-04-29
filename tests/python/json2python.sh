#!/bin/bash

# converts json to python format

sed -i -e s/null/None/ $1
sed -i -e s/true/True/ $1
sed -i -e s/false/False/ $1
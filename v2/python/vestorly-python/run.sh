#!/bin/sh

echo ""
echo "#############"
echo ""
pip uninstall -y vestorly
python setup.py install

echo ""
echo " ... running ... "
echo ""
python example.py
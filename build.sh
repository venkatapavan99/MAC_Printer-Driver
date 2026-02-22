# build.sh
mkdir -p build
cd build
cmake ..
make

# Package into DMG
hdiutil create -volname PrinterDriver \
    -srcfolder ./bin \
    -ov -format UDZO PrinterDriver.dmg


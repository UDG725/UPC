build:
	g++ -c -g "src\homescreen.cpp" -o "builds\build.o"
	g++ -static -static-libgcc -static-libstdc++ -o "builds\upc.exe" "builds\build.o" "icon-files\icon.res"

build-icon:
	windres "icon-files\icon.rc" -O coff -o "icon-files\icon.res"

clean:
	del "builds\build.o"
	del "builds\upc.exe"
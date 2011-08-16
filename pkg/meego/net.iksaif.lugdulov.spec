# 
# Do not Edit! Generated by:
# spectacle version 0.18
# 
# >> macros
# << macros

Name:       net.iksaif.lugdulov
Summary:    Lugdulo'V - Find a bike in your City
Version:    0.5.0
Release:    1
Group:      Applications/Productivity
License:    GPLv2
URL:        http://xf.iksaif.net/dev/lugdulov.html
Source0:    %{name}-%{version}.tar.bz2
BuildRequires:  pkgconfig(QtCore) >= 4.6.0
BuildRequires:  pkgconfig(QtNetwork)
BuildRequires:  pkgconfig(QtGui)
BuildRequires:  qt-mobility-devel
BuildRequires:  cmake


%description
Find a bike quickly in your city, with map and geolocalisation support !



%prep
%setup -q -n %{name}-%{version}

# >> setup
# << setup

%build
# >> build pre
# << build pre

old_pwd=$PWD

mkdir qjson-meego-build
cd qjson-meego-build
cmake ../qjson/  \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_INSTALL_PREFIX:PATH=$old_pwd/local/ \
    -DBUILD_SHARED_LIBS=OFF

make %{?jobs:-j%jobs}
make install

cd $old_pwd

mkdir qtm-geoservices-meego-build
cd qtm-geoservices-meego-build
cmake ../qtm-geoservices-extras/  \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_INSTALL_PREFIX:PATH=/opt/%{name}

make %{?jobs:-j%jobs}

cd $old_pwd

mkdir meego-build
cd meego-build
cmake ..  \
    -DCMAKE_INSTALL_PREFIX:PATH=/opt/%{name} \
    -DCMAKE_BUILD_TYPE=Release \
    -DLUGDULOV_FULL_UI=ON \
    -DLUGDULOV_MEEGO=ON \
    -DQMAPCONTROL=OFF \
    -DQJSON_INCLUDE_DIR:PATH=$old_pwd/local/include \
    -DQJSON_LIBRARIES=qjson \
    -DQJSON_LIBRARY_DIRS:PATH=$old_pwd/local/lib


make %{?jobs:-j%jobs}

# >> build post
# << build post
%install
rm -rf %{buildroot}
# >> install pre
# << install pre
cd qtm-geoservices-meego-build
%make_install 

cd ..

cd meego-build
%make_install 

# >> install post
# << install post


%post
/bin/touch --no-create %{_datadir}/icons/hicolor || :
%{_bindir}/gtk-update-icon-cache \
  --quiet %{_datadir}/icons/hicolor 2> /dev/null|| :
%{_bindir}/update-desktop-database %{_datadir}/applications &> /dev/null || :

%postun
/bin/touch --no-create %{_datadir}/icons/hicolor || :
%{_bindir}/gtk-update-icon-cache \
  --quiet %{_datadir}/icons/hicolor 2> /dev/null|| :
%{_bindir}/update-desktop-database %{_datadir}/applications &> /dev/null || :


%files
%defattr(-,root,root,-)
# >> files
# << files
/opt/net.iksaif.lugdulov/bin/lugdulov
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationsaustralia.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationsaustria.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationsbelgium.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationscanada.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationsfrance.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationsgermany.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationsireland.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationsjapan.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationslatvia.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationslower-austria.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationsluxembourg.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationsnew-zealand.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationsspain.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationsswitzerland.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationsunited-kingdom.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationsusa.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationsturkey.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationspoland.so
/opt/net.iksaif.lugdulov/lib/lugdulov/plugins/libstationsslovenia.so
/usr/share/applications/net.iksaif.lugdulov.desktop
/usr/share/icons/hicolor/16x16/apps/net.iksaif.lugdulov.png
/usr/share/icons/hicolor/32x32/apps/net.iksaif.lugdulov.png
/usr/share/icons/hicolor/64x64/apps/net.iksaif.lugdulov.png
/usr/share/icons/hicolor/128x128/apps/net.iksaif.lugdulov.png
/usr/share/icons/hicolor/scalable/apps/net.iksaif.lugdulov.svg
/opt/net.iksaif.lugdulov/plugins/geoservices/libqtgeoservices_osm.so
/opt/net.iksaif.lugdulov/plugins/geoservices/libqtgeoservices_google.so

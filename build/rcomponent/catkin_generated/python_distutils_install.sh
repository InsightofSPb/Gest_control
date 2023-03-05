#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/alexander/project/src/rcomponent"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/alexander/project/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/alexander/project/install/lib/python3/dist-packages:/home/alexander/project/build/rcomponent/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/alexander/project/build/rcomponent" \
    "/usr/bin/python3" \
    "/home/alexander/project/src/rcomponent/setup.py" \
     \
    build --build-base "/home/alexander/project/build/rcomponent" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/alexander/project/install" --install-scripts="/home/alexander/project/install/bin"

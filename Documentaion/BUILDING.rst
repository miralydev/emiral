BUILDING
========

The guide for build VM.

Dependencies
------------

* Git: git-scm.com
* GCC: gcc.gnu.org
* make: gnu.org/software/make
* Operating System: Windows/MacOS/Linux

Basic algorithm for build
-------------------------

1. Download dependencies
2. Clone the latest version of the project
3. Configure
4. Build with a build system

WINDOWS (not test)
------------------

1. Download MSYS2

.. code-block:: bash

    curl -L -o msys2-x86_64-latest.exe "https://github.com/msys2/msys2-installer/releases/latest/download/msys2-x86_64-latest.exe"

2. Execute installer

.. code-block:: bash

    start msys2-x86_64-latest.exe

3. Open MSYS2 MinGW and Download Deps

.. code-block:: bash

    pacman -Syu --noconfirm
    pacman -S --noconfirm make gcc git

4. Check installation

.. code-block:: bash

    make --version
    gcc --version
    git --version

5. Clone the project

.. code-block:: bash

    git clone https://github.com/miralydev/emiral.git
    cd emiral

6. Configure

.. code-block:: bash

    make defconf
    
7. Build

.. code-block:: bash

    make -j$(nproc)


LINUX
-----

1. Download deps

Arch-based
~~~~~~~~~~

.. code-block:: bash

    sudo pacman -Syu git make gcc

Debian-based
~~~~~~~~~~~~

.. code-block:: bash

    sudo apt update && sudo apt upgrade
    sudo apt install git make gcc

2. Clone the project

.. code-block:: bash

    git clone https://github.com/miralydev/emiral.git
    cd emiral

3. Configure

.. code-block:: bash

    make defconf

4. Build

.. code-block:: bash

    make -j$(nproc)

 

MACOS
-----

1. Download deps

.. code-block:: bash

    brew update
    brew install git make gcc

2. Clone the project

.. code-block:: bash

    git clone https://github.com/miralydev/emiral.git
    cd emiral

3. Configure

.. code-block:: bash

    make defconf

4. Build

.. code-block:: bash

    make -j$(sysctl -n hw.ncpu)



You can edit this guide
~~~~~~~~~~~~~~~~~~~~~~~


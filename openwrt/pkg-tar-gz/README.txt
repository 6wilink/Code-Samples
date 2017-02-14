Manage OpenWrt Packages via SOURCE CODE
---------------------------------------
by Qige @ Ottawa, 2017.02.14

1. Prepare Makefile in OpenWrt
	1.1 "mkdir <cc_root>/package/gws5k";
	1.2 "cp openwrt-package/gws5k/Makefile <cc_root>/package/gws5k";

2. Prepare SOURCE CODE
	2.1 See "pkg-src/gws5k_11-52", pay attention to the directory name;
	2.2 Prepare files in "pkg-src/gws5k_11-52";

3. Compress "pkg-src/gws5k_11-52" to "pkg-src/gws5k_11-52.tar.gz";

4. Run "md5sum pkg-src/gws5k_11-52.tar.gz > md5.txt";

5. Open "md5.txt", copy checksum string to Step 1 Makefile;

6. "make package/gws5k/compile V=s";

7. Check "<cc_root>/dl/gws5k_11-52.tar.gz", "<cc_root>/bin/ar71xx/packages/gws5k_*.ipk".


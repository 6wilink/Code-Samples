# 6Harmonics Inc.
# by Qige: qige@6harmonics.com, qige.zhao@6wilink.com
# 2017.02.09-2017.02.14

include $(TOPDIR)/rules.mk

APP_NAME:=gws-abb
PKG_NAME:=gws-abb
PKG_VERSION:=1.0
PKG_RELEASE:=1

PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)_$(PKG_VERSION)-$(PKG_RELEASE)

PKG_SOURCE:=$(PKG_NAME)_$(PKG_VERSION)-$(PKG_RELEASE).tar.gz
PKG_SOURCE_URL:=http://10.10.1.151/pkg-src/ \
	http://10.10.1.150/pkg-src/
PKG_MD5SUM:=94e26353778bee05d56dd0e3b43160e7

#PKG_FIXUP:=libtool
#PKG_INSTALL:=1

include $(INCLUDE_DIR)/package.mk

define Package/$(PKG_NAME)
  SECTION:=utils
  CATEGORY:=Utilities
  TITLE:=GWS Analog Baseband Manager
  MAINTAINER:=Qige Zhao <qige@6harmonics.com>
  DEPENDS:=+libiwinfo
endef

define Package/$(PKG_NAME)/description
  Analog Baseband Manager, share data via shm/files;
  Depends on libiwinfo.
endef


define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)
endef

define Build/Configure
endef

define Package/$(PKG_NAME)/install
	$(INSTALL_DIR) $(1)/etc/config
	$(INSTALL_DIR) $(1)/etc/init.d
	$(INSTALL_DIR) $(1)/usr/sbin

	$(INSTALL_CONF) $(PKG_BUILD_DIR)/$(APP_NAME).conf 	$(1)/etc/config/$(APP_NAME)
	$(INSTALL_BIN) 	$(PKG_BUILD_DIR)/$(APP_NAME).init 	$(1)/etc/init.d/$(APP_NAME)
	$(INSTALL_BIN) 	$(PKG_BUILD_DIR)/$(APP_NAME) 		$(1)/usr/sbin/$(APP_NAME)
endef

$(eval $(call BuildPackage,$(PKG_NAME)))

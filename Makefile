# FINALPACKAGE = 1

export TARGET = iphone:clang:15.5:14.0
export ADDITIONAL_CFLAGS = -DTHEOS_LEAN_AND_MEAN -fobjc-arc
INSTALL_TARGET_PROCESSES = SpringBoard

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = Little12SpringBoard Little12UIKit
Little12SpringBoard_FILES = TweakSpring.xm
Little12UIKit_FILES = TweakUI.xm

include $(THEOS_MAKE_PATH)/tweak.mk

SUBPROJECTS += little12prefs
include $(THEOS_MAKE_PATH)/aggregate.mk
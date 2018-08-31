include $(THEOS)/makefiles/common.mk

TOOL_NAME = geoservicesexample
geoservicesexample_FILES = main.m
geoservicesexample_CFLAGS = -fobjc-arc
geoservicesexample_PRIVATE_FRAMEWORKS = GeoServices

include $(THEOS_MAKE_PATH)/tool.mk

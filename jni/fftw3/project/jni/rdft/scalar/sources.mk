sources = hc2c.c \
          hfb.c \
          r2c.c \
          r2r.c \

LOCAL_SRC_FILES += $(sources:%=rdft/scalar/%)

LIB = cps
SHLIB_MAJOR = 0.0.0

SRCS = cps.cpp
CXXFLAGS += -shared -I.

SHLIB_NAME = $(LIB).so.$(SHLIB_MAJOR)

all: $(SHLIB_NAME)

$(SHLIB_NAME): $(SRCS:.cpp=.o)
	$(LINK.cc) $(OUTPUT_OPTION) $^

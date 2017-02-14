# 6Harmonics Inc
# by Qige: qige@6harmonics.com, qige.zhao@6wilink.com
# 2016.07.13 - 2017.02.14

APP=gws-abb

all: $(APP)

$(APP): *.c
	$(CC) $(CFLAGS) $(EXTRA_CFLAGS) -I. -Iiwinfo -liwinfo -o $@ $^ -L.

clean:
	rm -f $(APP)


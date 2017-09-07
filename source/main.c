#include <ogc/machine/processor.h>

int main(int argc, char** argv) {
	write32(0xd8006a0, (read32(0xd8006a0) == 0x30000002) ? 0x30000004 : 0x30000002);
	mask32(0xd8006a8, 0, 2);
	return 0;
}
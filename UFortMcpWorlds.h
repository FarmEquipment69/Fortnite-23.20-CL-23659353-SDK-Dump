// Class /Script/FortniteGame.FortMcpWorlds
// Size: 0xd0
class UFortMcpWorlds : public UFortMcpResource
{
	struct FFortActiveTheaterInfo TheaterInfo; // 0x40 (0x30)
	int TheaterQueryRetry; // 0x70 (0x4)
	unsigned char unreflected_74[0x4]; // 0x74 (0x4) 
	struct FDateTime* LastTheaterRefresh; // 0x78 (0x8)
	struct TWeakObjectPtr<class UWorld> LastWorld; // 0x80 (0x28)
	unsigned char padding_a8[0x28]; // 0xa8 (0x28)
};


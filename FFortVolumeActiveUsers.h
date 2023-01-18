// ScriptStruct /Script/FortniteGame.FortVolumeActiveUsers
// Size: 0x210
struct FFortVolumeActiveUsers : FFastArraySerializer
{
	struct TArray<struct FVolumePlayerStateInfo> Items; // 0x108 (0x10)
	class AFortVolumeManager* Manager; // 0x118 (0x8)
	unsigned char padding_120[0xf0]; // 0x120 (0xf0)
};


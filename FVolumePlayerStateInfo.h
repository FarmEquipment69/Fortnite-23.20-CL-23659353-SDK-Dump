// ScriptStruct /Script/FortniteGame.VolumePlayerStateInfo
// Size: 0x48
struct FVolumePlayerStateInfo : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FUniqueNetIdRepl UniquePlayerId; // 0x10 (0x30)
	class AFortVolume* Volume; // 0x40 (0x8)
};


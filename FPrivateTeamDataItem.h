// ScriptStruct /Script/FortniteGame.PrivateTeamDataItem
// Size: 0x48
struct FPrivateTeamDataItem : FFastArraySerializerItem
{
	float Value; // 0xc (0x4)
	struct FUniqueNetIdRepl PlayerId; // 0x10 (0x30)
	unsigned char padding_40[0x8]; // 0x40 (0x8)
};


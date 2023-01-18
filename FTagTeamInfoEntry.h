// ScriptStruct /Script/FortniteGame.TagTeamInfoEntry
// Size: 0x18
struct FTagTeamInfoEntry : FFastArraySerializerItem
{
	unsigned char TeamNum; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	int PlayerCount; // 0x10 (0x4)
	int PreviousPlayerCount; // 0x14 (0x4)
};


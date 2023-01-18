// ScriptStruct /Script/FortniteGame.GameMemberInfo
// Size: 0x40
struct FGameMemberInfo : FFastArraySerializerItem
{
	unsigned char SquadId; // 0xc (0x1)
	unsigned char TeamIndex; // 0xd (0x1)
	unsigned char unreflected_e[0x2]; // 0xe (0x2) 
	struct FUniqueNetIdRepl MemberUniqueId; // 0x10 (0x30)
};


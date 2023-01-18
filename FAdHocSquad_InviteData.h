// ScriptStruct /Script/FortniteGame.AdHocSquad_InviteData
// Size: 0x20
struct FAdHocSquad_InviteData : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class AFortPlayerStateAthena* InvitingPlayerState; // 0x10 (0x8)
	enum EAdHocSquads_InviteStatus InviteStatus; // 0x18 (0x1)
	unsigned char padding_19[0x7]; // 0x19 (0x7)
};


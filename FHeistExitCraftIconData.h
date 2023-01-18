// ScriptStruct /Script/FortniteUI.HeistExitCraftIconData
// Size: 0x10
struct FHeistExitCraftIconData
{
	int IconIndex; // 0x0 (0x4)
	enum EHeistExitCraftIconState IconState; // 0x4 (0x1)
	enum EHeistExitCraftIconState PrevIconState; // 0x5 (0x1)
	unsigned char unreflected_6[0x2]; // 0x6 (0x2) 
	int SecondsUntilIncoming; // 0x8 (0x4)
	bool bTeamHasBling; // 0xc (0x1)
	unsigned char padding_d[0x3]; // 0xd (0x3)
};


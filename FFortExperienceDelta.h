// ScriptStruct /Script/FortniteGame.FortExperienceDelta
// Size: 0x24
struct FFortExperienceDelta
{
	int Level; // 0x0 (0x4)
	int Xp; // 0x4 (0x4)
	int BaseXPEarned; // 0x8 (0x4)
	int BonusXPEarned; // 0xc (0x4)
	int BoostXPEarned; // 0x10 (0x4)
	int BoostXPMissed; // 0x14 (0x4)
	int RestXPEarned; // 0x18 (0x4)
	int GroupBoostXPEarned; // 0x1c (0x4)
	enum EFortIsFinalXpUpdate IsFinalXpUpdate; // 0x20 (0x1)
	unsigned char padding_21[0x3]; // 0x21 (0x3)
};


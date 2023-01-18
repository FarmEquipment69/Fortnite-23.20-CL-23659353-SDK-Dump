// ScriptStruct /Script/FortniteGame.DBNOCustomSettings
// Size: 0x2c
struct FDBNOCustomSettings
{
	enum EDBNOMutatorType Enabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float TenacityDepletionRate; // 0x4 (0x4)
	float ReviveHealthPercentage; // 0x8 (0x4)
	bool bAllowRevives; // 0xc (0x1)
	bool bAllowCarry; // 0xd (0x1)
	unsigned char unreflected_e[0x2]; // 0xe (0x2) 
	float TimeToRevive; // 0x10 (0x4)
	bool bAlertTeam; // 0x14 (0x1)
	bool LastManStandingMode; // 0x15 (0x1)
	bool bAllowInterrogation; // 0x16 (0x1)
	bool bAllowInterrogationReveal; // 0x17 (0x1)
	int SelectedTeam; // 0x18 (0x4)
	bool bTeamAffectsAllButSelected; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	int SelectedClass; // 0x20 (0x4)
	bool bClassAffectsAllButSelected; // 0x24 (0x1)
	enum ETenacityType TenacityType; // 0x25 (0x1)
	unsigned char unreflected_26[0x2]; // 0x26 (0x2) 
	float TenacityAmount; // 0x28 (0x4)
};


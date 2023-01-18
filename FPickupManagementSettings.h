// ScriptStruct /Script/FortniteGame.PickupManagementSettings
// Size: 0x14
struct FPickupManagementSettings
{
	int PickupsAllowedMax; // 0x0 (0x4)
	int PickupsDesiredSlack; // 0x4 (0x4)
	float PickupDespawnDelaySeconds; // 0x8 (0x4)
	bool bDebugPickupManagement; // 0xc (0x1)
	bool bEnablePickupManagement; // 0xd (0x1)
	enum EFortRarity NotJunkPickupThreshold; // 0xe (0x1)
	enum EFortRarity ImportantPickupThreshold; // 0xf (0x1)
	bool bFlagPlayerDropsAsImportant; // 0x10 (0x1)
	unsigned char padding_11[0x3]; // 0x11 (0x3)
};


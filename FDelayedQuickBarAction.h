// ScriptStruct /Script/FortniteGame.DelayedQuickBarAction
// Size: 0x38
struct FDelayedQuickBarAction : FFastArraySerializerItem
{
	uint32_t ActionId; // 0xc (0x4)
	enum EFortDelayedQuickBarAction Action; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	struct FGuid ItemGuid; // 0x14 (0x10)
	struct FPrimaryAssetId* ItemDefinitionAssetId; // 0x24 (0x8)
	enum EFortQuickBars QuickBarType; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	int QuickBarSlot; // 0x30 (0x4)
	bool bForceExecution; // 0x34 (0x1)
	unsigned char padding_35[0x3]; // 0x35 (0x3)
};


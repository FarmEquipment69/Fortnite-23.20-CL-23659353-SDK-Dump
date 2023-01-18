// ScriptStruct /Script/FortniteGame.FortCreativeOptionDestructiveAction
// Size: 0x58
struct FFortCreativeOptionDestructiveAction : FTableRowBase
{
	enum ECreativeOptionDestructiveActionOperator CheckedActionOperator; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FText DialogTitle; // 0x10 (0x18)
	struct FText DialogInfoText; // 0x28 (0x18)
	struct FName ConfirmActionName; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct TArray<struct FConfirmationDialogAction> ButtonInputActions; // 0x48 (0x10)
};


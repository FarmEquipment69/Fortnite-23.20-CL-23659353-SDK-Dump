// ScriptStruct /Script/DynamicUI.DynamicUIUnallowed
// Size: 0x38
struct FDynamicUIUnallowed
{
	struct TWeakObjectPtr<class UClass> Widget; // 0x0 (0x28)
	struct FName UniqueId; // 0x28 (0x4)
	enum EDynamicUIUnallowedBehavior Behavior; // 0x2c (0x4)
	unsigned char bTargetAll; // 0x30 (0x1)
	unsigned char bUseUniqueID; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};


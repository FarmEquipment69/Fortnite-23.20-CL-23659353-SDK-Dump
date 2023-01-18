// ScriptStruct /Script/FortniteGame.PropertyOverrideData
// Size: 0x50
struct FPropertyOverrideData
{
	struct TArray<struct FPropertyOverrideMk2> PropertyOverrides; // 0x0 (0x10)
	struct TArray<struct FPropertyOverrideId*> SharedPropertyIds; // 0x10 (0x10)
	struct TArray<struct FPropertyOverrideId*> PendingPropertyIds; // 0x20 (0x10)
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	enum EPropertyOverrideTargetType OverrideMode; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	class UObject* BaseObject; // 0x40 (0x8)
	class UObject* MutableObject; // 0x48 (0x8)
};


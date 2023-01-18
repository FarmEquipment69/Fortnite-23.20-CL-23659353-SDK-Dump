// ScriptStruct /Script/DynamicUI.DynamicUIAllowed
// Size: 0x78
struct FDynamicUIAllowed
{
	struct TWeakObjectPtr<class UClass> Widget; // 0x0 (0x28)
	enum EDynamicUIZOrder ZOrder; // 0x28 (0x4)
	int CustomZOrder; // 0x2c (0x4)
	struct FName UniqueId; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct TWeakObjectPtr<class UCommonInputActionDomain> ActionDomain; // 0x38 (0x28)
	class UDynamicUIConstraintBase* LayoutConstraint; // 0x60 (0x8)
	class UDynamicUISizeBase* SizeModifier; // 0x68 (0x8)
	unsigned char LayerIDOverride; // 0x70 (0x1)
	unsigned char bIsUnique; // 0x71 (0x1)
	unsigned char bUseActionDomain; // 0x71 (0x1)
	unsigned char bUseLayerOverride; // 0x71 (0x1)
	unsigned char padding_72[0x6]; // 0x72 (0x6)
};


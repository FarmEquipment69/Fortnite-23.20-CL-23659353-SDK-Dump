// Class /Script/DynamicUI.DynamicUIConstraintPlatformOverride
// Size: 0xd0
class UDynamicUIConstraintPlatformOverride : public UDynamicUIConstraintOverrideBase
{
	struct TMap<struct FName, class UDynamicUIConstraintBase*> PlatformVisibilityControls; // 0x28 (0x50)
	struct TMap<enum ECommonInputType, class UDynamicUIConstraintBase*> InputTypeVisibilityControls; // 0x78 (0x50)
	unsigned char padding_c8[0x8]; // 0xc8 (0x8)
};


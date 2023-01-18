// Class /Script/DynamicUI.DynamicUISizeOverridePlatform
// Size: 0xd0
class UDynamicUISizeOverridePlatform : public UDynamicUISizeOverrideBase
{
	struct TMap<struct FName, class UDynamicUISizeBase*> PlatformOverrides; // 0x28 (0x50)
	struct TMap<enum ECommonInputType, class UDynamicUISizeBase*> InputTypeOverrides; // 0x78 (0x50)
	unsigned char padding_c8[0x8]; // 0xc8 (0x8)
};


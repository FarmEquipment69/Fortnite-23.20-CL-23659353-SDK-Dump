// Class /Script/FortniteUI.FortSettingRegistry
// Size: 0xf8
class UFortSettingRegistry : public UObject
{
	unsigned char unreflected_28[0x78]; // 0x28 (0x78) 
	struct TArray<class UFortSetting*> TopLevelSettings; // 0xa0 (0x10)
	struct TArray<class UFortSetting*> RegisteredSettings; // 0xb0 (0x10)
	class UFortLocalPlayer* OwningLocalPlayer; // 0xc0 (0x8)
	unsigned char padding_c8[0x30]; // 0xc8 (0x30)
};


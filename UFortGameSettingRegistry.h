// Class /Script/FortniteUI.FortGameSettingRegistry
// Size: 0x168
class UFortGameSettingRegistry : public UFortSettingRegistry
{
	class UFortSettingCollection* VideoSettings; // 0xf8 (0x8)
	class UFortSettingCollection* AudioSettings; // 0x100 (0x8)
	class UFortSettingCollection* GameplaySettings; // 0x108 (0x8)
	class UFortSettingCollection* MouseAndKeyboardSettings; // 0x110 (0x8)
	class UFortSettingCollection* MouseAndKeyboardBindings; // 0x118 (0x8)
	class UFortSettingCollection* ControllerSettings; // 0x120 (0x8)
	class UFortSettingCollection* ControllerButtonMappingSettings; // 0x128 (0x8)
	class UFortSettingCollection* TouchAndMotionSettings; // 0x130 (0x8)
	class UFortSettingCollection* HudSettings; // 0x138 (0x8)
	class UFortSettingCollection* AccountSettings; // 0x140 (0x8)
	class UFortSetting* FlickStickEnabledSetting; // 0x148 (0x8)
	bool bEnableColorCalibration; // 0x150 (0x1)
	unsigned char unreflected_151[0x7]; // 0x151 (0x7) 
	class UFortGameFeature_FortGameRegistryObserver* GameRegistryObserver; // 0x158 (0x8)
	unsigned char padding_160[0x8]; // 0x160 (0x8)
};


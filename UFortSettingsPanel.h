// Class /Script/FortniteUI.FortSettingsPanel
// Size: 0x6d8
class UFortSettingsPanel : public UCommonUserWidget
{
	unsigned char unreflected_290[0x18]; // 0x290 (0x18) 
	class UFortSettingRegistry* Registry; // 0x2a8 (0x8)
	struct TArray<class UFortSetting*> VisibleSettings; // 0x2b0 (0x10)
	class UFortSetting* LastHoveredOrSelectedSetting; // 0x2c0 (0x8)
	struct FFortSettingsFilterState FilterState; // 0x2c8 (0x3b8)
	struct TArray<struct FFortSettingsFilterState> FilterNavigationStack; // 0x680 (0x10)
	unsigned char unreflected_690[0x18]; // 0x690 (0x18) 
	class UFortSettingsListView* ListViewSettings; // 0x6a8 (0x8)
	class UFortSettingDetailView* DetailsSettings; // 0x6b0 (0x8)
	struct FMulticastInlineDelegate BPOnExecuteNamedAction; // 0x6b8 (0x10)
	unsigned char padding_6c8[0x10]; // 0x6c8 (0x10)
};


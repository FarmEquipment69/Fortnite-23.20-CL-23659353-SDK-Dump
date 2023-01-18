// Class /Script/FortniteUI.FortPlaylistUIExtensionPrioritizedWidgetSwitcher
// Size: 0x250
class UFortPlaylistUIExtensionPrioritizedWidgetSwitcher : public UFortPrioritizedWidgetSwitcher
{
	struct TEnumAsByte<EHorizontalAlignment> ContentHorizontalAlignment; // 0x230 (0x1)
	struct TEnumAsByte<EVerticalAlignment> ContentVerticalAlignment; // 0x231 (0x1)
	unsigned char unreflected_232[0x6]; // 0x232 (0x6) 
	struct TArray<enum EUIExtensionSlot> ExtensionSlots; // 0x238 (0x10)
	class UFortPlaylistUIExtensionLoader* PlaylistUIExtensionLoader; // 0x248 (0x8)
};


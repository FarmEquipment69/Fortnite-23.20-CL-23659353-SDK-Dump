// Class /Script/FortniteUI.FortPlaylistUIExtensionLoader
// Size: 0xd0
class UFortPlaylistUIExtensionLoader : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	struct TMap<class UObject*, class UUserWidget*> ObjectBoundWidgets; // 0x38 (0x50)
	struct TArray<class UUserWidget*> OrphanWidgets; // 0x88 (0x10)
	unsigned char padding_98[0x38]; // 0x98 (0x38)

	/* Functions */

	// Function /Script/FortniteUI.FortPlaylistUIExtensionLoader.HandlePlaylistExtensionWidgetCreatedNotSupported (Underlying native function: HandlePlaylistExtensionWidgetCreatedNotSupported 0xa6ff044)
	void HandlePlaylistExtensionWidgetCreatedNotSupported(enum EUIExtensionSlot& ExtensionSlot, class UUserWidget*& Widget); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortPlaylistUIExtensionLoader.HandleClearPlaylistExtensionWidgetNotSupported (Underlying native function: HandleClearPlaylistExtensionWidgetNotSupported 0xa6feaf0)
	void HandleClearPlaylistExtensionWidgetNotSupported(); // (Final | Native | Private)
};


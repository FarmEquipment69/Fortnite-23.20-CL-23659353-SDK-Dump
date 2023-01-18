// Class /Script/FortniteConversationUI.FortPlayerConversationUIComponent
// Size: 0x268
class UFortPlayerConversationUIComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct TWeakObjectPtr<class UClass> DialogWidgetSoftClass; // 0xa8 (0x28)
	struct TWeakObjectPtr<class UClass> DialogMarkerSoftClass; // 0xd0 (0x28)
	struct TWeakObjectPtr<class UClass> MobileDialogWidgetSoftClass; // 0xf8 (0x28)
	struct TArray<class UDynamicUIScene*> SpectatorConversationScenes; // 0x120 (0x10)
	struct TArray<class UDynamicUIScene*> SpectatorMobileConversationScenes; // 0x130 (0x10)
	class UClass* DialogWidgetClass; // 0x140 (0x8)
	class UClass* DialogMarkerClass; // 0x148 (0x8)
	struct FUserWidgetPool DialogWidgetPool; // 0x150 (0x88)
	unsigned char padding_1d8[0x90]; // 0x1d8 (0x90)
};


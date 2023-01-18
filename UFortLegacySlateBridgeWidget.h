// Class /Script/FortniteUI.FortLegacySlateBridgeWidget
// Size: 0x170
class UFortLegacySlateBridgeWidget : public UNativeWidgetHost
{
	enum EFortLegacySlateWidget ContainedWidgetType; // 0x158 (0x1)
	unsigned char unreflected_159[0x3]; // 0x159 (0x3) 
	float DPIScaleFactor; // 0x15c (0x4)
	struct FDelegate OnClose; // 0x160 (0xc)
	unsigned char padding_16c[0x4]; // 0x16c (0x4)

	/* Functions */

	// Function /Script/FortniteUI.FortLegacySlateBridgeWidget.UpdateSlateWidget (Underlying native function: UpdateSlateWidget 0xa702968)
	void UpdateSlateWidget(enum EFortLegacySlateWidget& SlateWidgetType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortLegacySlateBridgeWidget.SetOnCloseHandler (Underlying native function: SetOnCloseHandler 0xa702104)
	void SetOnCloseHandler(struct FDelegate& OnCloseHandler); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};


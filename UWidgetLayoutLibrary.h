// Class /Script/UMG.WidgetLayoutLibrary
// Size: 0x28
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot (Underlying native function: SlotAsWrapBoxSlot 0x9b255fc)
	static class UWrapBoxSlot* SlotAsWrapBoxSlot(class UWidget*& Widget); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot (Underlying native function: SlotAsWidgetSwitcherSlot 0x9b25558)
	static class UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(class UWidget*& Widget); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot (Underlying native function: SlotAsVerticalBoxSlot 0x22e7f54)
	static class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget*& Widget); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot (Underlying native function: SlotAsUniformGridSlot 0x9b254b4)
	static class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget*& Widget); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot (Underlying native function: SlotAsSizeBoxSlot 0x26f7d90)
	static class USizeBoxSlot* SlotAsSizeBoxSlot(class UWidget*& Widget); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot (Underlying native function: SlotAsScrollBoxSlot 0x9b25410)
	static class UScrollBoxSlot* SlotAsScrollBoxSlot(class UWidget*& Widget); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot (Underlying native function: SlotAsScaleBoxSlot 0x9b2536c)
	static class UScaleBoxSlot* SlotAsScaleBoxSlot(class UWidget*& Widget); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot (Underlying native function: SlotAsSafeBoxSlot 0x9b252b4)
	static class USafeZoneSlot* SlotAsSafeBoxSlot(class UWidget*& Widget); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsOverlaySlot (Underlying native function: SlotAsOverlaySlot 0x2470d18)
	static class UOverlaySlot* SlotAsOverlaySlot(class UWidget*& Widget); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot (Underlying native function: SlotAsHorizontalBoxSlot 0x1512a34)
	static class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget*& Widget); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsGridSlot (Underlying native function: SlotAsGridSlot 0x9b25210)
	static class UGridSlot* SlotAsGridSlot(class UWidget*& Widget); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsCanvasSlot (Underlying native function: SlotAsCanvasSlot 0x9b25158)
	static class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget*& Widget); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsBorderSlot (Underlying native function: SlotAsBorderSlot 0x26f7cd8)
	static class UBorderSlot* SlotAsBorderSlot(class UWidget*& Widget); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.RemoveAllWidgets (Underlying native function: RemoveAllWidgets 0x9b23310)
	static void RemoveAllWidgets(class UObject*& WorldContextObject); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition (Underlying native function: ProjectWorldLocationToWidgetPosition 0x9b22e94)
	static bool ProjectWorldLocationToWidgetPosition(class APlayerController*& PlayerController, struct FVector& WorldLocation, struct FVector2D& ScreenPosition, bool& bPlayerViewportRelative); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry (Underlying native function: GetViewportWidgetGeometry 0x9b21e84)
	static struct FGeometry GetViewportWidgetGeometry(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportSize (Underlying native function: GetViewportSize 0x9b21dfc)
	static struct FVector2D GetViewportSize(class UObject*& WorldContextObject); // (Final | BlueprintCosmetic | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportScale (Underlying native function: GetViewportScale 0x9b21d7c)
	static float GetViewportScale(class UObject*& WorldContextObject); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry (Underlying native function: GetPlayerScreenWidgetGeometry 0x9b21ccc)
	static struct FGeometry GetPlayerScreenWidgetGeometry(class APlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI (Underlying native function: GetMousePositionScaledByDPI 0x9b21b34)
	static bool GetMousePositionScaledByDPI(class APlayerController*& Player, float& LocationX, float& LocationY); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnViewport (Underlying native function: GetMousePositionOnViewport 0x9b21aac)
	static struct FVector2D GetMousePositionOnViewport(class UObject*& WorldContextObject); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform (Underlying native function: GetMousePositionOnPlatform 0x9b21a7c)
	static struct FVector2D GetMousePositionOnPlatform(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};


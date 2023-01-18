// Class /Script/UMG.GameViewportSubsystem
// Size: 0x80
class UGameViewportSubsystem : public UGameInstanceSubsystem
{
	unsigned char unreflected_80[0x80]; 

	/* Functions */

	// Function /Script/UMG.GameViewportSubsystem.SetWidgetSlotPosition (Underlying native function: SetWidgetSlotPosition 0x9af0260)
	static struct FGameViewportWidgetSlot SetWidgetSlotPosition(struct FGameViewportWidgetSlot& Slot, class UWidget*& Widget, struct FVector2D& Position, bool& bRemoveDPIScale); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.GameViewportSubsystem.SetWidgetSlotDesiredSize (Underlying native function: SetWidgetSlotDesiredSize 0x9af010c)
	static struct FGameViewportWidgetSlot SetWidgetSlotDesiredSize(struct FGameViewportWidgetSlot& Slot, struct FVector2D& Size); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.GameViewportSubsystem.SetWidgetSlot (Underlying native function: SetWidgetSlot 0x9aefda8)
	void SetWidgetSlot(class UWidget*& Widget, struct FGameViewportWidgetSlot& Slot); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.GameViewportSubsystem.RemoveWidget (Underlying native function: RemoveWidget 0x9aed794)
	void RemoveWidget(class UWidget*& Widget); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.GameViewportSubsystem.IsWidgetAdded (Underlying native function: IsWidgetAdded 0x9aed08c)
	bool IsWidgetAdded(class UWidget*& Widget); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.GameViewportSubsystem.GetWidgetSlot (Underlying native function: GetWidgetSlot 0x9aecdd8)
	struct FGameViewportWidgetSlot GetWidgetSlot(class UWidget*& Widget); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.GameViewportSubsystem.AddWidgetForPlayer (Underlying native function: AddWidgetForPlayer 0x9aeb914)
	void AddWidgetForPlayer(class UWidget*& Widget, class ULocalPlayer*& Player, struct FGameViewportWidgetSlot& Slot); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.GameViewportSubsystem.AddWidget (Underlying native function: AddWidget 0x9aeb7f8)
	void AddWidget(class UWidget*& Widget, struct FGameViewportWidgetSlot& Slot); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)
};

